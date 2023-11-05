#include <iostream>
#include <vector>

void tabv() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6); 
    std::cout << numbers[5];
}

int main() {
    tabv();
    return 0;
}