#include <iostream>
#include <tuple>
#include <string>

std::tuple<std::string, int> createPerson() {
    return std::tuple<std::string, int>("HMJ", 28);
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    // Method 1
    std::tuple<std::string, int> person = createPerson();
    std::string name = std::get<0>(person);
    int age = std::get<1>(person);

    // Method 2
    std::string name3;
    int age3;
    std::tie(name3, age3) = createPerson();

    // Method 3 Structured binding.
    auto[name1, age1] = createPerson();
    std::cout << name1 << std::endl;
    std::cout << age1 << std::endl;

    return 0;
}
