#include <iostream>

int fact(int i)
{
    return i > 1 ? * fact(i - 1) : 1;
}

int main()
{
    std::cout << fact(5) << std::endl;
    return 0;
}