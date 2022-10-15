#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int>Pair2bc;
struct Triangle{
int a,b,c;};

int sort3(int &a,int &b, int &c)
{
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
}

int uniqueTriangle(struct Triangle arr[],int n)
{
    set<pair<int,Pair2bc>>s;
    for(int i=0;i<n;i++)
    {
        int a=arr[i].a; int b=arr[i].b; int c=arr[i].c;
        sort3(a,b,c);
        s.insert({a,{b,c}});

    }
    return s.size();
}

int main()
{
    struct Triangle arr[]={{3,2,2},{3,4,5},{1,2,2},{2,2,3},{5,4,3},{6,4,5}};
    int n=sizeof(arr)/(sizeof(Triangle));
    cout<<n;
    cout<<"\nNo. of unique triangle is:"<<uniqueTriangle(arr,n);
}
