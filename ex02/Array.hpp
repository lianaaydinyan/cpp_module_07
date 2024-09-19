#ifndef _array_
#define _array_


#include <stdexcept>
#include <cstddef>

template <typename T>
class Array
{
private:
    T* my_arr;
    unsigned int arr_size;
public:
    Array();
    Array(unsigned int n);
    ~Array();
    Array(const Array& other);
    Array& operator=(const Array& other);
    T& operator[](std::size_t index);
    const T& operator[](std::size_t index) const;
    unsigned int size() const;
};

#include "Array.tpp"

#endif