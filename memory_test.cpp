
#include <iostream>

int main() {
    int* numbers = new int[1000000];
    long long sum = 0;
    for (int i = 0; i < 1000000; ++i) {
        numbers[i] = i;
        sum += numbers[i];
    }

    std::cout << "Sum: " << sum << std::endl;

    delete[] numbers;
    return 0;
}
