#include<iostream>
void pattern12(int n)
{
      int space=2*(n-1);
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=i;j++){
              std::cout<<j;
          }
          for(int j = 1;j<=space;j++){
              std::cout<<" ";
          }
          for(int j=i;j>=1;j--){
              std::cout<<j;
          }
        std::cout<<"\n";
        space-=2;
      }
}
int main()
{
     int n;
     std::cout<<"enter the value of n:";
        std::cin>>n;
        pattern12(n);
        return(0);
}
