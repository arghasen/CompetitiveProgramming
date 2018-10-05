#include <bits/stdc++.h>
using namespace std;
typedef long long int  ll;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif

    int t,a,b,sa=0,sb=0;
    cin>>t;
    int lead[t];
   for (auto i = 0; i < t; i++) {
       cin>>a>>b;
       sa+=a;
       sb+=b;
       lead[i]=sa-sb;
   }
   auto alead = max_element(lead, lead+t);
   auto blead = min_element(lead, lead+t);

   if(*alead>abs(*blead))
       cout<<"1 "<<*alead;
   else
       cout<<"2 "<<abs(*blead);
   cout<<endl;
   return 0;
}
