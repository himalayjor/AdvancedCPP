#include <iostream>

class Example {
private:
    int x;
public:
    Example(int x) : x(x) {
        std::cout << "Example constructor with " << x << std::endl;
    }

    Example() {
        std::cout << "Example constructor" << std::endl;
    }
};

class Entity {
private:
    int mx;
    std::string name;
    Example m_example;
public:
    Entity(int mx, std::string name) : mx(mx), name(name), m_example(mx)
    {

    }
    Entity()
    {
        m_example = Example(100);
        mx = 1;
        name = "Unknown";
        //std::cout << "Entity constructor" << std::endl;
    }
    const std::string &getName() const {
        return name;
    }
    int getMx() const {
        return mx;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    Entity e0;
    std::cout << e0.getName() << std::endl;

    Entity e1(1, "Himalay");
    std::cout << e1.getName() << std::endl;

    return 0;
}
