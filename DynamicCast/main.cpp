#include <iostream>

class Entity {
public:
    virtual ~Entity() {

    }
};

class Player : public Entity {

};

class Enemy : public Entity {

};

int main() {
    std::cout << "Hello, World!" << std::endl;

    Entity* actualPlayer = new Player();
    Entity* actualEnemy = new Enemy();

    Player* p1 = dynamic_cast<Player*>(actualEnemy);

    if (p1 == NULL) {
        std::cout << "Invalid cast\n" << std::endl;
    }

    Player* p2 = dynamic_cast<Player*>(actualPlayer);
    if (p2 != NULL) {
        std::cout << "Valid cast\n" << std::endl;
    }

    return 0;
}
