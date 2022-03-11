#include <iostream>
#include "GLFW/glfw3.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    bool x = false;
    char c = 65;
    int xx = 12;
    float ff = 5.5;
    double dd = 5.5;

    cout << sizeof(x) << endl;

    cout << c << endl;
    cout << sizeof(ff) << endl;
    cout << sizeof(dd) << endl;
    cout << sizeof(xx) << endl;

    int a = glfwInit();
    cout << a << endl;

    return 0;
}
