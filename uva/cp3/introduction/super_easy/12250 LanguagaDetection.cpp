#include <bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
   int s;
    int i=0;
    unordered_map<string,string> lang{{"HELLO","ENGLISH"},{"HOLA","SPANISH"},{"HALLO","GERMAN"},
                                {"BONJOUR","FRENCH"},{"CIAO","ITALIAN"},{"ZDRAVSTVUJTE","RUSSIAN"}};
    while(1){
        cin>>s;
        if(s==0)
            break;
        while(s--)
        cout<<"Case "<<++i<<": ";
        if(it ==lang.end())
            cout<<"UNKNOWN"<<endl;    
        else
            cout<<it->second<<endl;
    }
    return 0;
}