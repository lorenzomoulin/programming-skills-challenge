#include <iostream>

int main () {
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 ) std::cout << "Foo";
        if (i % 5 == 0 ) std::cout << "Baa";
        if (i % 3 != 0 && i % 5 != 0) std::cout << i;
        std::cout << '\n';
    }
    return 0;
}