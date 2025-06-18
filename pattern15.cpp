#include<iostream>
void pattern15(int n)
{
      for(int i=n;i>=1;i--)
      {
          for(int j=1;j<=i;j++){
              std::cout<<char('A'+j-1)<<" ";
          }
        std::cout<<"\n";
      }
}
int main()
{
     int n;
     std::cout<<"enter the value of n:";
        std::cin>>n;
        pattern15(n);
        return(0);
}
