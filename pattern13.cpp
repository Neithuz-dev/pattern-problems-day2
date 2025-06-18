#include<iostream>
void pattern13(int n)
{
      int num =1;
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=i;j++){
              std::cout<<num<<" ";
             num=num+1;
          }
        std::cout<<"\n";
      }
}
int main()
{
     int n;
     std::cout<<"enter the value of n:";
        std::cin>>n;
        pattern13(n);
        return(0);
}
