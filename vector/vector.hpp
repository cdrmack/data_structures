#pragma once

#include <cstddef>

template <typename T, std::size_t S>
class vector
{
private:
    T data[S];
};
