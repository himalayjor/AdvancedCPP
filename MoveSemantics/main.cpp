#include <iostream>

class String {
private:
    char* data;
    u_int32_t sz;
public:
    String() = default;
    String(const char* string) {
        sz = strlen(string);
        data = new char[sz];
        memcpy(data, string, sz);
    }

    ~String() {
        std::cout << "Desstroyed String" << std::endl;
        delete data;
    }

    // taking r-value
    String(String&& other) noexcept {
        std::cout << "Moved" << std::endl;
        sz = other.sz;
        data = other.data;
        other.data = NULL;
        other.sz = 0;
    }

    String& operator=(String&& other) noexcept {
        std::cout << "Moved assigment operator" << std::endl;

        if (this != &other) {
            delete[] data;
            sz = other.sz;
            data = other.data;
            other.data = NULL;
            other.sz = 0;
        }

        return *this;
    }

    // taking l-value.
    String(const String& other) {
        std::cout << "Copied" << std::endl;
        sz = other.sz;
        data = new char[sz];
        memcpy(data, other.data, sz);
    }
};

class Entity {
public:
    Entity(String&& name): m_name(std::move(name)) {}
private:
    String m_name;
};


int main() {
    std::cout << "Hello, World!" << std::endl;

    // Entity entity(String("abc"));

    String ss = "HMK";
    String dest;

    dest = std::move(ss);

    return 0;
}
