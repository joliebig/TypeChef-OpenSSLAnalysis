Steps for parsing OpenSSL:
==========================

1. download and unpack
2. configure
3. get #ifdef (#if and #el) flags out of openssl code (.h and .c)
   3.1 remove &&, || and !
   3.2 remove lines with ==,<=,>=,<,>,+,/
   3.3 remove duplicates
   3.4 remove __cplusplus (g++-specific)
4. run make



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
- EVP_CHECK_DES_KEY needs to be undefined; I'm not sure why (TODO)!
