#include<iostream>

void pattern20(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        for(int j = 1; j <= 2 * (n - i); j++) {
            std::cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        for(int j = 1; j <= 2 * (n - i); j++) {
            std::cout << " ";
        }
        for(int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}
int main()
{
     int n;
     std::cout<<"enter the value of n:";
        std::cin>>n;
        pattern20(n);
        return(0);
}