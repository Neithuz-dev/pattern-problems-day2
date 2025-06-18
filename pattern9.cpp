#include<iostream>
    void pattern9up(int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                std::cout<<" ";
            }
            for(int j=0;j<2*i+1;j++)
            {
            
            std::cout<<"*";
        }
         for (int j =0; j<n-i-1; j++)
        {
            std::cout <<" ";
        }
            std::cout<<"\n";
        }
    }
        void pattern9down(int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                std::cout<<" ";
            }
            for(int j=0;j<2*n-(2*i+1);j++)
            {
            
            std::cout<<"*";
        }
         for (int j =0; j<i; j++)
        {
            std::cout <<" ";
        }
            std::cout<<"\n";
        }
    }
    int main()
    {
        int n;
        std::cout<<"enter the value of n:";
        std::cin>>n;
        pattern9up(n);
        pattern9down(n);
        return(0);
    }