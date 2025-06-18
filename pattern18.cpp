#include<iostream>
void pattern18(int n)
{
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n-i-1;j++){
              std::cout<<" ";
          }
          char str='A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++)
          {
              std::cout<<str;
              if(j <= breakpoint) str++;
              else str--;
          }
           for(int j=0;j<n-i-1;j++){
             std::cout<<" ";
          }
          
        std::cout<<"\n";
 }
}
int main()
{
     int n;
     std::cout<<"enter the value of n:";
        std::cin>>n;
        pattern18(n);
        return(0);
}