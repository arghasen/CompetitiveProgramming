#include <bits/stdc++.h>
using namespace std;
typedef long long int  ll;


int main()
{
    int t,a,b,sa,sb;
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
}
