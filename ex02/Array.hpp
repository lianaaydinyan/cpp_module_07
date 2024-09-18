#ifndef _array_
#define _array_

template <typename T>
class Array
{
    private:
        T*           my_arr;
        unsigned int size;
    public:
        Array() : my_arr(nullptr) , size(0) {};
        ~Array() { delete my_arr[] };
        Array(unsigned int n) { my_arr = new T[](); } ;
        Array(const Array& copy) {};
        Array& operator=(const Array& copy);
        T& operator[] (std::size_t index);
        unsigned int size() const;
};


#include "Array.tpp"

#endif