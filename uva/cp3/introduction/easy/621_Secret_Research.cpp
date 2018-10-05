#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int n;
    cin>>n;
    string val;
    for(int i = 0; i < n; i++)
    {
        cin>>val;
        if(val=="1" ||val=="4"||val=="78")
            cout<<"+"<<endl;
        else if (val.substr(val.size()-2)=="35")
            cout<<"-"<<endl;
        else if (val[0]=='9' && val[val.size()-1]=='4')
            cout<<"*"<<endl;
        else if (val.substr(0,3)=="190")
            cout<<"?"<<endl;
    }

    return 0;
}