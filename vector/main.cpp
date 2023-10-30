#include <cstdint>

#include "vector.hpp"

constexpr std::size_t initial_vector_size = 5;

auto main(int argc, char *argv[]) -> int
{
    vector<int32_t, initial_vector_size> v = {};
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(42);

    return 0;
}
