#include <iostream>

class Entity {
private:
    int mx;
    std::string name;
public:
    Entity(int mx, std::string name) : mx(mx), name(name)
    {

    }
    Entity()
    {
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

    {
        // stack (less memory available for stack. 1mb)
        Entity e1;
        e1.getName();
    }


    Entity* entity;
    {
        // heap memory. All java objects are on heap.
        // new is slow compared to stack memory.
        Entity* e2 = new Entity();
        e2->getName();
        entity = e2;
    }
    delete entity;

    return 0;
}
