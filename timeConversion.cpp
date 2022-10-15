////AM-PM time format to 24hr time format

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string time;
    cin>>time;
    string ampm=time.substr(time.size()-2);
    string rem=time.substr(2,6);
    string shr=time.substr(0,2);
      int hr=stoi(shr);
    if(ampm=="PM")
    {
        if(hr<12)
       { hr+=12;
        shr=to_string(hr);
       }
    }
    else{
        if(hr==12)
        shr[0]=shr[1]='0';
    }

    cout<<shr+rem;

}