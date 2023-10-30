#pragma once

#include <cstddef>
#include <cstring>

template <typename T, std::size_t S>
class vector
{
public:
    vector() : m_size(0), m_capacity(S), m_data(new T[S])
    {};

    ~vector()
    {
        delete[] m_data;
    };

    auto push_back(const T& element) -> void
    {
        if (m_size == m_capacity)
        {
            grow();
        }

        m_data[m_size] = element;
        ++m_size;
    }

private:
    auto grow() -> void
    {
        std::size_t new_capacity = m_capacity * 2;
        T* new_data = new T[new_capacity];

        std::memcpy(new_data, m_data, m_capacity * sizeof(T));
        delete[] m_data;
        m_data = new_data;
        m_capacity = new_capacity;
    };

    std::size_t m_size;
    std::size_t m_capacity;
    T* m_data;
};
