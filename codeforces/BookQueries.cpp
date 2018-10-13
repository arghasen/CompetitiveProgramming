#include <bits/stdc++.h>
using namespace std;
#define F(i,L,R) for (int i = L; i < R; i++) //next four are for "for loops"
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define FF(i,L,R) for (int i = L; i > R; i--)
#define FFE(i,L,R) for (int i = L; i >= R; i--)

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int T;
    cin>>T;
    char command;
    int id;
    unordered_map<int,int> shelf;
    int curl=-1, curr=1;
    cin>>command>>id;
    shelf[id]=0;
    T--;
    while(T--)
    {
        cin>>command>>id;
        if(command=='L')
        {
                shelf[id]=curl;
                --curl;
        }
        else if(command=='R')
        {   
            shelf[id]= curr;
            curr++;
        }
        else
            {
                cout << min(abs(shelf[id] - curl), abs(shelf[id] - curr)) - 1 << "\n";
            }
    }
    return 0;
}
