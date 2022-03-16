#include <iostream>

class Entity {
public:
    Entity() {
        std::cout << "Base construct" << std::endl;
    }

    virtual ~Entity() {
        std::cout << "Base destruct" << std::endl;
    }

    virtual std::string Getname() { return "Entity";}
};

class Person : public Entity {
private:
    std::string m_name;
public:
    Person(const std::string &mName) : m_name(mName) {
        std::cout << "Derived construct" << std::endl;
    }

    virtual ~Person() {
        std::cout << "Derived destruct" << std::endl;
    }

    std::string Getname() override { return m_name;}

};
int main() {
    std::cout << "Hello, World!" << std::endl;

    Entity *e = new Entity();
    std::cout << e->Getname() << std::endl;
    delete e;
    std::cout << "------" << std::endl;

    Person *p1 = new Person("hmj");
    std::cout << p1->Getname() << std::endl;
    delete p1;
    std::cout << "------" << std::endl;

    Entity *p2 = new Person("hmj");
    std::cout << p2->Getname() << std::endl;
    delete p2;

    return 0;
}
