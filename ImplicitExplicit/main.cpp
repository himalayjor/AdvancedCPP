#include <iostream>

class Entity {
private:
    int mx;
    std::string name;
public:
    explicit Entity(int mx) : mx(mx), name("Unknown")
    {

    }
    Entity(std::string name):  mx(-1), name(name)
    {
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

    // implicit conversion (not available in java, c#)
    Entity e2 = std::string("Himalay");

    // explicit conversion
    Entity e1 = Entity(20);
    // Entity e3 = 20; won't work.

    return 0;
}
