#include<iostream>

void pattern22(int n) {
    int size = 2 * n - 1;

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;
            int min_dist = std::min(std::min(top, bottom), std::min(left, right));
            std::cout << n - min_dist << " ";
        }
        std::cout << "\n";
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    pattern22(n);
    return 0;
}
