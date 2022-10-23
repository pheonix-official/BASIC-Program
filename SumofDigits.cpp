#include <iostream>  
using namespace std;  
// summation function to calculate sum of digits
int Summation(int n)
{
int sum=0;
while(n>0)    
{ 
int temp;   
temp=n%10;    
sum=sum+temp;    
n=n/10;    
}    
return sum;
}

int main()  
{  
int n;    
cout<<"Enter a number: ";    
cin>>n; 
cout<<"Sum of given digits is: "<<Summation(n)<<endl;    
return 0;  
}  