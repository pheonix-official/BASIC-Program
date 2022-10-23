#include <iostream>  
using namespace std; 

void palindrome(int n)
{
  int temp=n,sum=0;
  while(n>0)    
  { 
    int r;
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
  }    
  if(temp==sum)    
    cout<<"Number is Palindrome.";    
  else    
    cout<<"Number is not Palindrome."; 
}

int main()  
{  
  int n;    
  cout<<"Enter the Number=";    
  cin>>n;    
  palindrome(n);   
  return 0;  
}  