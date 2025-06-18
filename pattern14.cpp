#include<iostream>
void pattern14(int n)
{
      for(int i=1;i<=n;i++)
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
        pattern14(n);
        return(0);
}
