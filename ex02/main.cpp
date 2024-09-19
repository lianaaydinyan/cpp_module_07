#include "Array.hpp"
#include <iostream>

int main() {
    Array<int> arr(3);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    for (unsigned int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
