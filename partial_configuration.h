// set default values for several non-boolean macro-names
#define __GNUC__ 2

#ifdef DTLS1_AD_MISSING_HANDSHAKE_MESSAGE
    #define DTLS1_AD_MISSING_HANDSHAKE_MESSAGE "anystring"
#endif

#ifdef NO_WINDOWS_BRAINDEATH
    #define NO_WINDOWS_BRAINDEATH "anystring"
#endif

#ifdef OPENSSLDIR
    #define OPENSSLDIR "anystring"
    #define ENGINESDIR "/usr/local/ssl/lib/engines"
#endif

#ifdef DEFAULT_HOME
    #define DEFAULT_HOME "."
#endif

#ifdef NX509_SIG
    #define NX509_SIG 32
#endif

#ifdef OPENSSL_NO_TLSEXT
    #define SSL_CTRL_SET_TLS_EXT_SRP_USERNAME    0
    #define SSL_CTRL_SET_TLS_EXT_SRP_PASSWORD    0
    #define SSL_CTRL_SET_TLS_EXT_SRP_STRENGTH    0
    #define SSL_CTRL_SET_SRP_VERIFY_PARAM_CB     0
    #define SSL_CTRL_SET_SRP_ARG                 0
    #define SSL_CTRL_SET_TLS_EXT_SRP_USERNAME_CB 0
    #define SSL_CTRL_SET_SRP_GIVE_CLIENT_PWD_CB  0
#endif

#ifdef SSIZE_MAX
    #define SSIZE_MAX 9223372036854775807L
#endif

#ifdef SO_MAXCONN
    #define SO_MAXCONN 128
#endif

#ifdef SOL_TCP
    #define SOL_TCP 0
#endif

#ifdef TCP_NODELAY
    #define TCP_NODELAY 0
#endif

#ifdef OPENSSL_NO_SHA
    #define SHA_DIGEST_LENGTH 20
#endif

#define CFLAGS   "anystring"
#define DATE     "anystring"
#define PLATFORM "anystring"

#define REF_PRINT(a,b) fprintf(stderr,"%08X:%4d:%s\n",(int)b,b->references,a)

#define OPENSSL_MAX_TLS1_2_CIPHER_LENGTH 0
#define TLSEXT_TYPE_opaque_prf_input     0

#ifdef SSL_AD_MISSING_SRP_USERNAME
    #define SSL_AD_MISSING_SRP_USERNAME 20
#endif

#ifdef O_BINARY
    #define O_BINARY 0400
#endif

#ifdef MYALLOC
    #define MYALLOC(x) malloc(x)
    #define MYFREE(x)  free(x)
#endif

#ifdef min
    #define min(n,u) ((n) < (u) ? (n) : (u))
#endif

#ifdef OPENSSL_NO_NEXTPROTONEG
    #define TLSEXT_TYPE_next_proto_neg 13172
#endif

#if !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && !defined(_MSC_VER) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && !defined(_M_IX86) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && defined(_M_IX86) && defined(NID_aes_128_cfb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(__i386) && defined(NID_aes_128_cfb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || !defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(NID_aes_128_cfb) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK)
    #define NID_aes_128_cfb 421
#endif

#if !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && !defined(_MSC_VER) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && !defined(_M_IX86) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && defined(_M_IX86) && !defined(OPENSSL_NO_HW) && defined(NID_aes_128_ofb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && defined(_M_IX86) && defined(OPENSSL_NO_HW) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(__i386) && !defined(OPENSSL_NO_HW) && defined(NID_aes_128_ofb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(__i386) && defined(OPENSSL_NO_HW) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || !defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(OPENSSL_NO_HW) && defined(NID_aes_128_ofb) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(OPENSSL_NO_HW) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK)
    #define NID_aes_128_ofb 420
#endif

#if !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && !defined(_MSC_VER) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && !defined(_M_IX86) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && defined(_M_IX86) && !defined(OPENSSL_NO_HW) && defined(NID_aes_192_cfb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && defined(_M_IX86) && defined(OPENSSL_NO_HW) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(__i386) && !defined(OPENSSL_NO_HW) && defined(NID_aes_192_cfb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(__i386) && defined(OPENSSL_NO_HW) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || !defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(OPENSSL_NO_HW) && defined(NID_aes_192_cfb) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(OPENSSL_NO_HW) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK)
    #define NID_aes_192_cfb 425
#endif

#if !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && !defined(_MSC_VER) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && !defined(_M_IX86) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && defined(_M_IX86) && !defined(OPENSSL_NO_HW) && defined(NID_aes_256_ofb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && defined(_M_IX86) && defined(OPENSSL_NO_HW) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(__i386) && !defined(OPENSSL_NO_HW) && defined(NID_aes_256_ofb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(__i386) && defined(OPENSSL_NO_HW) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || !defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(OPENSSL_NO_HW) && defined(NID_aes_256_ofb) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(OPENSSL_NO_HW) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK)
    #define NID_aes_256_ofb 428
#endif

#if !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && !defined(_MSC_VER) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && !defined(_M_IX86) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && defined(_M_IX86) && !defined(OPENSSL_NO_HW) && defined(NID_aes_192_ofb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && defined(_M_IX86) && defined(OPENSSL_NO_HW) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(__i386) && !defined(OPENSSL_NO_HW) && defined(NID_aes_192_ofb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(__i386) && defined(OPENSSL_NO_HW) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || !defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(OPENSSL_NO_HW) && defined(NID_aes_192_ofb) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(OPENSSL_NO_HW) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK)
    #define NID_aes_192_ofb 424
#endif

#if !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && !defined(_MSC_VER) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && !defined(_M_IX86) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && defined(_M_IX86) && !defined(OPENSSL_NO_HW) && defined(NID_aes_256_cfb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(__i386) && defined(_MSC_VER) && defined(_M_IX86) && defined(OPENSSL_NO_HW) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(__i386) && !defined(OPENSSL_NO_HW) && defined(NID_aes_256_cfb) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(__i386) && defined(OPENSSL_NO_HW) || !defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || !defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && !defined(OPENSSL_NO_HW) && defined(NID_aes_256_cfb) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && !defined(OPENSSL_NO_INLINE_ASM) && defined(OPENSSL_NO_HW) || defined(__i386__) && !defined(OPENSSL_NO_HW_PADLOCK) && defined(OPENSSL_NO_INLINE_ASM) || defined(__i386__) && defined(OPENSSL_NO_HW_PADLOCK)
    #define NID_aes_256_cfb 429
#endif


// set default values for several "features"
#define _BITS_STDIO_LOCK_H


#undef OPENSSL_NO_AES
#undef OPENSSL_NO_BIO
#undef OPENSSL_NO_COMP
#undef OPENSSL_NO_DEPRECATED
#undef OPENSSL_NO_DSA
#undef OPENSSL_NO_EC
#undef OPENSSL_NO_ECDH
#undef OPENSSL_NO_ECDSA
#undef OPENSSL_NO_FP_API
#undef OPENSSL_NO_HEARTBEATS
#undef OPENSSL_NO_HW
#undef OPENSSL_NO_HW_UBSEC
#undef OPENSSL_NO_MD5
#undef OPENSSL_NO_OCSP
#undef OPENSSL_NO_POSIX_IO
#undef OPENSSL_NO_RSA
#undef OPENSSL_NO_SHA
#undef OPENSSL_NO_SHA1
#undef OPENSSL_NO_SHA256
#undef OPENSSL_NO_SPEED
#undef OPENSSL_NO_STDIO
#undef OPENSSL_NO_TLSEXT
#undef OPENSSL_NO_WHIRLPOOL

#undef __OpenBSD__
#undef _LIBC
#undef CHARSET_EBCDIC
#undef DEF_DSO_METHOD
#undef EVP_CHECK_DES_KEY
#undef MAC_OS_GUSI_SOURCE
#undef NOISY
#undef SGTTY
#undef WSAAPI

#undef KSSL_DEBUG
#undef TLS_DEBUG


// type error? variable undeclared
// s_server.c total_bytes
#undef RENEG

// type error? expected scalar found void
// dgst.c BIO_set_md
#undef CONST_STRICT

// type error? use before define
#undef OPENSSL_TIME_TEST

// unsure about reported type errors
#undef OBJ_XREF_TEST

// type error variable 'n' undeclared
// genpkey.c LINT
#undef LINT

// type error function 'sock_init' undeclared
// s_socket.c WATT32
#undef WATT32

// type error??
// s3_srvr.c CIPHER_DEBUG
#undef CIPHER_DEBUG

// gettimeofday bss_dgram.c
#undef OPENSSL_SYS_MPE

#ifdef ASN1_MAX_STRING_NEST
    #define ASN1_MAX_STRING_NEST "anystring"
#endif

// ebcdic2ascii undeclared a_utctm.c
#undef CHARSET_EBCDIC_not

// O_CREAT and open missing
#undef O_CREAT

// no features
#undef SCREW_THE_PARITY
#undef UNDEF
#undef NOT_USED

// tunala.c #error
#undef NO_BUFFER
#undef NO_IP
#undef NO_OPENSSL

// Microsoft Compiler stuff
#undef _MSC_VER
