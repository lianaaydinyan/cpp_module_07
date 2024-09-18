#include "whatever.hpp"
#include <iostream>

template <typename Tip>
void swap(Tip &x, Tip &y)
{
    Tip tmp = x;
    x = y;
    y = tmp;
}

template <typename Tip>
Tip max(Tip x, Tip y)
{

    return (x > y) ? x : y;
}

template <typename Tip>
Tip min(Tip x, Tip y)
{

    return (x < y) ? x : y;
}

int main( void )
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}
