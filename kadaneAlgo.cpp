#include <iostream>
using namespace std;

int main() {
     int b[9]={-3,3,2,-1,5,-4,7,9,-4};
    int sum=0; int maxm=0;
    for(int i=0;i<9;i++){
        sum=max(b[i],sum+b[i]);
        maxm=max(sum,maxm);
    }
    cout<<"Maximum sum of subarray is:"<<maxm;
	return 0;
}