#ifndef __MOTO_CRYPTO_MAIN_H
#define __MOTO_CRYPTO_MAIN_H

/* Constants used for failure injection in the module */
#define MOTO_CRYPTO_ALG_SHA1        0x00000001
#define MOTO_CRYPTO_ALG_SHA224      0x00000002
#define MOTO_CRYPTO_ALG_SHA256      0x00000004
#define MOTO_CRYPTO_ALG_SHA384      0x00000008
#define MOTO_CRYPTO_ALG_SHA512      0x00000010
#define MOTO_CRYPTO_ALG_HMAC_SHA1   0x00000020
#define MOTO_CRYPTO_ALG_HMAC_SHA224 0x00000040
#define MOTO_CRYPTO_ALG_HMAC_SHA256 0x00000080
#define MOTO_CRYPTO_ALG_HMAC_SHA384 0x00000100
#define MOTO_CRYPTO_ALG_HMAC_SHA512 0x00000200
#define MOTO_CRYPTO_ALG_AES_ECB_128 0x00000400
#define MOTO_CRYPTO_ALG_AES_ECB_192 0x00000800
#define MOTO_CRYPTO_ALG_AES_ECB_256 0x00001000
#define MOTO_CRYPTO_ALG_AES_CBC_128 0x00002000
#define MOTO_CRYPTO_ALG_AES_CBC_192 0x00004000
#define MOTO_CRYPTO_ALG_AES_CBC_256 0x00008000
#define MOTO_CRYPTO_ALG_AES_CTR_128 0x00010000
#define MOTO_CRYPTO_ALG_AES_CTR_192 0x00020000
#define MOTO_CRYPTO_ALG_AES_CTR_256 0x00040000
#define MOTO_CRYPTO_ALG_TDES_ECB    0x00080000
#define MOTO_CRYPTO_ALG_TDES_CBC    0x00100000
#define MOTO_CRYPTO_ALG_CPRNG       0x00200000

#define MOTO_CRYPTO_MODULE_INTEGRITY 0x00400000

#ifdef CONFIG_CRYPTO_MOTOROLA_FAULT_INJECTION
extern unsigned fault_injection_mask;
extern char* fault_injection_mask_string;
#endif 

/* Constants used on the module failure report */
#define MOTO_CRYPTO_FAILED_ALG_AES    0x00000001
#define MOTO_CRYPTO_FAILED_ALG_TDES   0x00000002
#define MOTO_CRYPTO_FAILED_ALG_SHA1   0x00000004
#define MOTO_CRYPTO_FAILED_ALG_SHA256 0x00000008
#define MOTO_CRYPTO_FAILED_ALG_SHA512 0x00000010
#define MOTO_CRYPTO_FAILED_ALG_HMAC   0x00000020
#define MOTO_CRYPTO_FAILED_ALG_RNG    0x00000040

#define MOTO_CRYPTO_FAILED_INTEGRITY  0x80000000

#endif
