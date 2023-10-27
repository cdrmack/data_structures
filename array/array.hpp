#pragma once

#include <cstddef>

template <typename T, std::size_t S>
class array
{
public:
    array() : m_size(S) {};

    auto size() -> std::size_t const
    {
        return m_size;
    };

    auto operator[](std::size_t index) -> T&
    {
        return m_data[index];
    }

private:
    const std::size_t m_size;
    T m_data[S];
};
