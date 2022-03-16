#include <iostream>

#define STRING_VIEW 0

static int allocating_count = 0;

void * operator new(size_t size) {
    allocating_count++;
    std::cout << "Allocating " << size << " bytes\n";
    return malloc(size);
}

#if not STRING_VIEW
void printName(const std::string &name) {
    std::cout << name << std::endl;
}
#else
void printName(std::string_view name) {
    std::cout << name << std::endl;
}
#endif

int main() {
    std::cout << "Hello, World!" << std::endl;

    // on stack. less than equal to 15 chars.
    std::string name = "Himalay";

    // on heap using new operator.
    std::string name2 = "Himalay Mohanlal Joriwal";

#if not STRING_VIEW
    std::string firstname = name2.substr(0, 7);
    std::string lastname = name2.substr(8, 8);
#else
    std::string_view firstname(name2.c_str(), 7);
    std::string_view lastname(name2.c_str()+8, 8);
#endif

    printName("Himalay Mohanlal Joriwal");
    printName(firstname);
    printName(lastname);

    std::cout << "allocating_count= " << allocating_count << std::endl;

    return 0;
}
