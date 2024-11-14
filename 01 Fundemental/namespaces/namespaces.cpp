#include <iostream>

namespace first
{
    int value = 1;
}

namespace second
{
    int value = 2;
}

int main()
{
    using namespace first;
    std::cout << value << std::endl;
    std::cout << second::value << std::endl;
    return 0;
}