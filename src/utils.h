#pragma once

#include <fstream>
#include <sstream>
#include <string>

#include <iomanip>
#include <stdexcept>
#include <openssl/evp.h>


std::string sha256(const std::string& data) {
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int hashLength = 0;

    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    if (!ctx) {
        throw std::runtime_error("Failed to create hash context");
    }

    if (!EVP_DigestInit_ex(ctx, EVP_sha256(), nullptr) ||
        !EVP_DigestUpdate(ctx, data.data(), data.size()) ||
        !EVP_DigestFinal_ex(ctx, hash, &hashLength)) {

        EVP_MD_CTX_free(ctx);
        throw std::runtime_error("SHA-256 failed");
    }

    EVP_MD_CTX_free(ctx);

    // Convert raw bytes into readable hexadecimal
    std::ostringstream result;

    for (unsigned int i = 0; i < hashLength; ++i) {
        result << std::hex
               << std::setw(2)
               << std::setfill('0')
               << static_cast<int>(hash[i]);
    }

    return result.str();
}