#include<iostream>
void pattern16(int n)
{
      for(int i=0;i<n;i++)
      {
          char ch='A'+i;
          for(int j=0;j<=i;j++){
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
        pattern16(n);
        return(0);
}