#include <iostream>
#include <string>
#include "iter.hpp"


template <typename T>
void print(T x)
{
    std::cout << x << " ";
}

template <typename T>
void square(T x)
{
    std::cout << x * x << " ";
}



int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    
    iter(numbers, sizeof(numbers) / sizeof(numbers[0]), print<int>);
    std::cout << std::endl;

    iter(numbers, sizeof(numbers) / sizeof(numbers[0]), square<int>);
    std::cout << std::endl;

    std::string words[] = {"Huracan", "Aventador", "Urus", "Gallardo", "Veneno"};
    iter(words, sizeof(words) / sizeof(words[0]), print<std::string>);
    std::cout << std::endl;

    return 0;
}