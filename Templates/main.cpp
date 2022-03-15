#include <iostream>

template<typename T>
void Print(T value) {
    std::cout << value << std::endl;
}

template<typename T, int N>
class Array
{
private:
    T m_Array[N];
public:
    int GetSize() const {return N; }
};

int main() {
    std::cout << "Hello, World!" << std::endl;

    Print(5);
    Print("Hello");
    Print(5.5f);

    Array<std::string, 50> array;

    return 0;
}
