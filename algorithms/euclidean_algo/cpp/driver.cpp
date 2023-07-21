#include <iostream>
#include "euclidean_algo.hpp"

int main(void) {
    std::cout<<"Finding GCD of 5 and 10 using Euclidean algorithm:\n";
    std::cout<<"GCD computed: "<<euclidean_GCD(5, 10)<<", expected: 5\n";
    if(euclidean_GCD(5, 10)==5) {
        std::cout<<"GCD computed properly\n";
    } else {
        std::cout<<"GCD was not computed properly\n";
    }

    std::cout<<"Finding GCD of 321 and 123 using Euclidean algorithm, with larger number as first input:\n";
    std::cout<<"GCD computed: "<<euclidean_GCD(321, 123)<<", expected: 3\n";
    if(euclidean_GCD(321, 123)==3) {
        std::cout<<"GCD computed properly\n";
    } else {
        std::cout<<"GCD was not computed properly\n";
    }

}