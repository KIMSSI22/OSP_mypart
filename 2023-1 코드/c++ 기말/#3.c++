#include <iostream>

void printReverseFloydsTriangle(int n) {
    if (n == 1) {
        std::cout << "1 ";
        return;
    }

    int count = (n * (n + 1)) / 2 - n + 1;
    std::cout << count << ",";

    printReverseFloydsTriangle(n - 1);
}

int main() {
    int n = 10;

    printReverseFloydsTriangle(n);

    return 0;
}