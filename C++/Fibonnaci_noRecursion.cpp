#include <iostream>  
using namespace std;  
int main() {  
 int n1=0,n2=1,number;    
 cout<<"Enter the number: ";    //finding fibonacci less than number
 cin>>number;    
 cout<<n1<<" "<<n2<<" "; //printing 0 and 1    
 for(int i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed    
 { 
  int temp;   
  temp=n1+n2;
  if(temp<number) 
  cout<<temp<<" ";
  else
  return;    //restricting:temp>=number;  
  n1=n2;    
  n2=temp;    
 }    
   return 0;  
   }  