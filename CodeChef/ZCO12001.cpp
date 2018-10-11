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
    
    int maxdepth =0;
    int curdepth =0;
    int maxsyms=0;
    int numsyms=0;
    int a;
    int i =0;
    int maxsymsstart=0, maxdepthstart=0;
    while(i<T)
    {
        cin>>a;
        if(a==1)
        {
            curdepth++;
            numsyms++;
            if(curdepth>maxdepth){
                maxdepth= curdepth;
                maxdepthstart= i+1;
            }
        }
        else
        {
            curdepth--;
            numsyms++;
            if(curdepth==0 )
            {
                if(maxsyms<numsyms)
                {
                    maxsyms= numsyms;
                    maxsymsstart = i+1-numsyms+1;
                }
                numsyms=0;
            }           
        }
        i++;
    }
    cout<<maxdepth<<" "<<maxdepthstart<<" "<<maxsyms<<" "<<maxsymsstart<<endl;
    return 0;
}
