#include <iostream>

class Entity {
private:
    int* mx, *my;
public:
    int *getMy() {
        return my;
    }

    void setMy(int *my) {
        Entity::my = my;
    }

public:
    const int* const getMx() const {
        return mx;
    }

    void setMx(int* mx) {
        Entity::mx = mx;
    }
};

void PrintEntity(const Entity& e) {
   //  e.getMy(); not allowed.
}
int main() {
    std::cout << "Hello, World!" << std::endl;

    const int MAX_AGE = 10;

    // xx pointing to const int.
    const int* xx = new int;
    // *xx = 1;
    xx = &MAX_AGE;

    // yy is const and can't change.
    int* const yy = new int;
    *yy = 1;
    // yy =  &MAX_AGE;

    const int* const zz = new int;
    // *zz = 1;
    // zz = &MAX_AGE;
    return 0;
}
