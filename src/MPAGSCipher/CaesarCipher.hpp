#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP


#include <cstddef>
#include <string>

class CaesarCipher {
    //public:
    CaesarCipher(const std::size_t key);
    const std::size_t key_{0};

    CaesarCipher(std::string key);
    
};

#endif