#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int i=0;
    string s;
    while (1)
    {
        cin >> s;
        if (s == "*")
            break;
       if(s=="Hajj") 
        cout << "Case " << ++i << ": " << "Hajj-e-Akbar"<<endl;
        else
        cout << "Case " << ++i << ": " << "Hajj-e-Asghar"<<endl;
    }
    return 0;
}