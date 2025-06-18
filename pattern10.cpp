#include<iostream>
    void pattern10(int n)
    {
        for(int i=1;i<=2*n-1;i++)
        {
            int stars = i;
            if(i>n)stars =2*n-i;
            for(int j=1;j<=stars;j++)
            {
                std::cout<<"* ";
            }
            std::cout<<"\n";
        }
    }
    int main()
    {
        int n;
        std::cout<<"enter the value of n:";
        std::cin>>n;
        pattern10(n);
        return(0);
    }