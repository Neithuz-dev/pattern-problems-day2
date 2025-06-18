#include<iostream>
void pattern19(int n)
{

      for(int i = 0; i < n; i++) {
        int stars = n - i;
        int spaces = 2 * i;
        for(int j = 0; j < stars; j++) {
            std::cout << "*";
        }
        for(int j = 0; j < spaces; j++) {
            std::cout << " ";
        }
        for(int j = 0; j < stars; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    for(int i = 0; i < n; i++) {
        int stars = i + 1;
        int spaces = 2 * (n - i - 1);
        for(int j = 0; j < stars; j++) {
            std::cout << "*";
        }
        for(int j = 0; j < spaces; j++) {
            std::cout << " ";
        }
        for(int j = 0; j < stars; j++) {
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
        pattern19(n);
        return(0);
}