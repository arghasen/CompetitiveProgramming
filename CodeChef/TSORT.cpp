#include <bits/stdc++.h>
using namespace std;
typedef long long int  ll;


int main()
{
    ll t,val;
    cin>>t;

   vector<ll> a;
   a.reserve(t);
   for (ll i = 0; i < t; i++) {
       cin>>val;
       a.push_back(val);
   }
   sort(a.begin(),a.end());
   for (auto var : a) {
       cout<<var<<endl;
   }
}
