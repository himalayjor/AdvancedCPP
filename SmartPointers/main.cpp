#include <iostream>
#include <memory>

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

    std::unique_ptr<Entity> entity(new Entity("abvc"));

    // Exception safe.
    std::unique_ptr<Entity> entity1 = std::make_unique<Entity>("abc");
    entity1->getName();

    std::shared_ptr<Entity> entity2 = std::make_shared<Entity>("abcd");
    return 0;
}
