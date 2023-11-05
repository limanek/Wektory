#include <iostream>
#include <vector>

void tabv() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6); 
    std::cout << numbers[5] << std::endl;
    std::cout << numbers.front() << std::endl;
    std::cout << numbers.back() << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    for(auto element : numbers) {
        std::cout << element << std::endl;
    }
}

int main() {
    tabv();
    return 0;
}