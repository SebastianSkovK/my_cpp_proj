// main.cpp
#include <iostream>


bool oddornot(int n) {
    if (n % 2 == 0) {
        return false;
    } else {
        return true;
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << oddornot(5) << std::endl;
    return 0;
}
