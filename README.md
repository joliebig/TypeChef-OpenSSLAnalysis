Steps for parsing OpenSSL:
==========================

1. download and unpack
2. configure
3. get #ifdef (#if and #el) flags out of openssl code (.h and .c)
   3.1 remove &&, || and !
   3.2 remove lines with ==,<=,>=,<,>,+,/
   3.3 remove duplicates
   3.4 remove __cplusplus (g++-specific)
4. set paths to system headers; run `cpp -v` and add include paths to mygcc script
5. run "export CC=`pwd`/mygcc" in the shell and "make" afterwards
6. add TypeChef parameters to mygcc script on demand (see typechef.sh for all available parameters)


NOTES:
- feature model: alternativ(DES_RISC1, DES_RISC2)
  opensslconf.h
    #if definedEx(DES_RISC1) && definedEx(DES_RISC2)
    YOU SHOULD NOT HAVE BOTH DES_RISC1 AND DES_RISC2 DEFINED!!!!!
    #endif
- -UOPENSSL_NO_BIO
  fixes a lot of type errors, given a lot of definitions are missing for
  OPENSSL_NO_BIO being defined.
- remove brackets from arguments in function definition
  crypto/des/des.h (e.g., DES_ecb3_encrypt((i), ...
                          DES_ecb3_encrypt(i, ...
- select OPENSSL_NO_DES or NO_MD5CRYPT_1
  otherwise triggers an error fputs not found due to missing <stdio.h>
  add macro OPENSSL_EXIT cannot be resolved
- DTLS1_AD_MISSING_HANDSHAKE_MESSAGE, NO_WINDOWS_BRAINDEATH, OPENSSLDIR
  set standard value for string parameter; see partial_configuration.h
- WSAAPI needs to be undefined for non-windows systems
  see partial_configuration.h
- EVP_CHECK_DES_KEY needs to be undefined; I'm not sure why (TODO)!
  see partial_configuration.h
- !NO_TUNALA && OPENSSL_NO_BUFFER: #error
- !DATA_ORDER_IS_BIG_ENDIAN && !DATA_ORDER_IS_LITTLE_ENDIAN: #error
- HASH_??? elements in crypto/md32_common.h refer to parametrized macros; neglect them
- crypto/rand/rand_lcl.h:
  !USE_MD5_RAND                                     A 582
  && !USE_SHA1_RAND                                 B 583
  && !USE_MDC2_RAND                                 C 584
  && !USE_MD2_RAND                                  D 585
  && ! (!OPENSSL_NO_SHA && !OPENSSL_NO_SHA1)        E 316 F 318
  && ! (!OPENSSL_NO_MD5)                            G 296
  && ! (!OPENSSL_NO_MDC2 && !OPENSSL_NO_DES)        H 297 I 258
  && ! (!OPENSSL_NO_MD2)                            J 294
  : #error
- crypto/sha/sha.h:
  OPENSSL_NO_SHA || (OPENSSL_NO_SHA0 && OPENSSL_NO_SHA1): #error
- tunala.h:
  !HAVE_SELECT || !HAVE_SOCKET: #error
- !(OPENSSL_SYS_UNIX || OPENSSL_SYS_WIN32 || OPENSSL_SYS_WINCE) && !OPENSSL_SYS_VMS: #error
- !OPENSSL_SYS_VOS_HPPA && !OPENSSL_SYS_VOS_IA32: #error
- NO_BUFFER || NO_IP || NO_OPENSSL: #error


A lot of constraints have been added to partialconf.h. Among the constraints are setting of default values for macros (strings, numbers), undefs (causing #error) and parametrized macro definitions.
