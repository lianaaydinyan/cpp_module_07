template <typename T>
Array<T>::Array() : my_arr(NULL), arr_size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : arr_size(n)
{
    my_arr = new T[n]();
}

template <typename T>
Array<T>::~Array()
{
    delete[] my_arr;
}

template <typename T>
Array<T>::Array(const Array& other) : arr_size(other.arr_size)
{
    my_arr = new T[arr_size];
    for (unsigned int i = 0; i < arr_size; ++i)
        my_arr[i] = other.my_arr[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    if (this == &other)
        return *this;

    delete[] my_arr;

    arr_size = other.arr_size;
    my_arr = new T[arr_size];
    for (unsigned int i = 0; i < arr_size; ++i)
        my_arr[i] = other.my_arr[i];
    return *this;
}

template <typename T>
T& Array<T>::operator[](std::size_t index)
{
    if (index >= arr_size)
        throw std::out_of_range("Index out of range");
    return my_arr[index];
}

template <typename T>
const T& Array<T>::operator[](std::size_t index) const
{
    if (index >= arr_size)
        throw std::out_of_range("Index out of range");
    return my_arr[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return arr_size;
}
