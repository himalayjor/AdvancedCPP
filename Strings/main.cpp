#include <iostream>
#include <string>

int main() {
    std::cout << "Hello, World!" << std::endl;

    char* xx = "Cherno";
    // xx[2] = 'a';
    // std::cout << xx << std::endl;

    char* yy = "abc\0def";
    std::cout << strlen(yy) << std::endl;

    char xx2[] = {'C', 'h', 'e', 'r', 'n', 'o', 0};
    xx2[2] = 'a';
    std::cout << xx2 << std::endl;

    std::string name = "Cherno";
    std::cout << name << std::endl;
    std::cout << sizeof(name) << std::endl;
    std::cout << name.size() << std::endl;

    std::string name2 = std::string("Cherno") + "Hello";
    std::cout << name2 << std::endl;

    std::cout << ( name2.find("no") != std::string::npos) << std::endl;

    return 0;
}
