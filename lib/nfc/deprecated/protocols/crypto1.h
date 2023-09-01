#pragma once

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint32_t odd;
    uint32_t even;
} Crypto1;

void old_crypto1_reset(Crypto1* crypto1);

void old_crypto1_init(Crypto1* crypto1, uint64_t key);

uint8_t old_crypto1_bit(Crypto1* crypto1, uint8_t in, int is_encrypted);

uint8_t old_crypto1_byte(Crypto1* crypto1, uint8_t in, int is_encrypted);

uint32_t old_crypto1_word(Crypto1* crypto1, uint32_t in, int is_encrypted);

uint32_t old_crypto1_filter(uint32_t in);

uint32_t old_prng_successor(uint32_t x, uint32_t n);

void old_crypto1_decrypt(
    Crypto1* crypto,
    uint8_t* encrypted_data,
    uint16_t encrypted_data_bits,
    uint8_t* decrypted_data);

void old_crypto1_encrypt(
    Crypto1* crypto,
    uint8_t* keystream,
    uint8_t* plain_data,
    uint16_t plain_data_bits,
    uint8_t* encrypted_data,
    uint8_t* encrypted_parity);