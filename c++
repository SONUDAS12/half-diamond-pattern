#include <iostream>  
  
int main()  
{  
    int n,m=1;  
    std::cout<<"Enter the number of rows";  
    std::cin>>n;
  
   for(int i=n;i>=1;i--)  
   {  
       for(int j=1;j<m;j++)  
       {  
           std::cout<<" ";  
       }  
       for(int k=1;k<=2*i-1;k++)  
       {  
          if(k==1 || k==2*i-1 || i==n)  
           std::cout<<"*";  
           else  
           std::cout<<" ";  
       }  
       m++;  
     
      printf("\n");  
    }  
    return 0;  
}
