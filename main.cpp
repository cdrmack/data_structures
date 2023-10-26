#include <cstdint>
#include <cassert>

#include "array.hpp"

constexpr std::size_t array_size = 42;

auto main(int argc, char *argv[]) -> int
{
    array<int32_t, array_size> a = {};
    assert(array_size == a.size());

    a[0] = 1;
    assert(1 == a[0]);

    a[0] = 2;
    assert(2 == a[0]);

    auto x = a[0];
    assert(2 == x);

    return 0;
}
