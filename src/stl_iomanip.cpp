#include <iostream>
#include <iomanip>

int main () {
    std::cout << std::hex;
    std::cout << std::setiosflags (std::ios::showbase | std::ios::uppercase);
    std::cout << 10 << std::endl;
    return 0;
}