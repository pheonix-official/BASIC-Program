#include <iostream>  
using namespace std; 
//array size definition using macro
#define size 10

int main()  
{  
int a[size], n;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(int i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(int i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}  