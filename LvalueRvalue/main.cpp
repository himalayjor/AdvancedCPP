#include <iostream>

void PrintName(const std::string &name) {
    std::cout << "[l-value]" << name << std::endl;
}

void PrintName(const std::string &&name) {
    std::cout << "[r-value]" << name << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    PrintName(std::string("abc") + "def");

    PrintName("abc");

    std::string xx = "abc";
    PrintName(xx);

    return 0;
}
