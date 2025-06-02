#include <iostream>
#include <functional>

std::function<int(int)> makeAdder(int x) {
    return [x](int y) {
        return x + y;
    };
}

int main() {
    auto adderTwo = makeAdder(2);
    std::cout << adderTwo(5) << std::endl;

    int outer = 100;
    {
        int inner = 200;
        std::cout << "Inside block: " << inner << std::endl;
    }

    return 0;
}
