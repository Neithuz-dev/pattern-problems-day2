#include<iostream>
void pattern11(int n)
{
      int start =1;
      for(int i=0;i<n;i++)
      {
          if(i%2 ==0){ 
            start = 1;
          }
          else
          {  
            start = 0;
          }
          for(int j=0;j<=i;j++){
              std::cout<<start;
              start = 1-start;
          }
        std::cout<<"\n";
      }
}
int main()
{
     int n;
     std::cout<<"enter the value of n:";
        std::cin>>n;
        pattern11(n);
        return(0);
}
