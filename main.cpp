#include <iostream>
#include "vector.hpp"

int main() {
    Vector vec;

    vec.alloc(10);

    for ( int i = 0; i < 10; i++) {
        vec.m_data[i] = (double)i/10.0;
    }

    for ( int i = 0; i < 10; i++) {
        std::cout << vec.m_data[i] << " ";
    }
    vec.free();
    std::cout << std::endl;
    return 0;
}