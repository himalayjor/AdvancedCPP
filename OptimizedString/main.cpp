#include <iostream>

void * operator new(size_t size) {
    std::cout << "Allocating " << size << " bytes\n";
    return malloc(size);
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    // on stack. less than equal to 15 chars.
    std::string name = "Himalay";

    // on heap using new operator.
    std::string name2 = "Himalay Mohanlal Joriwal";
    return 0;
}
