#include<iostream>
void pattern17(int n)
{
      for(int i=0;i<n;i++)
      {
          char str='F'-i;
          for(char ch=str;ch<='F';ch++){
              std::cout<<ch <<" ";
          }
        std::cout<<"\n";
      }
}
int main()
{
     int n;
     std::cout<<"enter the value of n:";
        std::cin>>n;
        pattern17(n);
        return(0);
}