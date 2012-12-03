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
