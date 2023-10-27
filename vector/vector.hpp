#pragma once

#include <cstddef>

template <typename T, std::size_t S>
class vector
{
public:
    vector() : m_size(0), m_capacity(S) {};

    auto push_back(const T& element) -> void
    {
        if (m_size == m_capacity)
        {
            // TODO, grow
        }

        m_data[m_size] = element;
        ++m_size;
    }

private:
    std::size_t m_size;
    std::size_t m_capacity;
    T m_data[S];
};
