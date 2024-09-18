#ifndef _iter_
#define _iter_

template <typename Tip, typename Function>
void iter(Tip* array, size_t size, Function func)
{
    for (size_t i = 0; i < size ; i++)
    {
        func(array[i]);
    }
}

#endif