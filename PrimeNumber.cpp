#include <iostream> 
#include<cmath> 
using namespace std;  
int main()  
{  
  int n,flag=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;
  if (n==1) 
  cout << "Number isn't Prime."<<endl;
  else{
  for(int i = 2; i <= sqrt(n); i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number isn't Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "Number is Prime."<<endl;
  }  
  return 0;  
}  