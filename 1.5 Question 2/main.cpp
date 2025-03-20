#include <iostream>  // for std::cout and std::cin

int main()
{   

    int a{};
    int b{};
    int c{};
    std::cout << "Enter Three numbers: ";
    std::cin >> a >> b >> c;
    std::cout << "You entered " << a << ", " << b  << ", and " << c <<".\n";

    return 0;
}
