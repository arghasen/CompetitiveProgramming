 #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;

    ll number_of_k(ll arr[],ll n,ll minimum_max__dist){
       ll sum=0;
       ll k=1;
       for(ll i=0;i<n;i++){
          sum+=arr[i];
         if(sum > minimum_max__dist){
           sum=arr[i];
            k++;
          }
      }
    return k;
   }

    ll Max(ll arr[], ll n)
    {
       ll max1 = -1;
       for (ll i = 0; i < n; i++)
          if (arr[i] > max1)
              max1 = arr[i];
      return max1;
    }

    ll Sum(ll arr[], ll n)
    {
      ll sum = 0;
       for (int i = 0; i < n; i++)
       sum += arr[i];
       return sum;
     }

       ll min_max_bin_search(ll arr[],ll n,ll k){
         ll low=Max(arr,n);
         ll high=Sum(arr,n);
         ll mid;
while(low<high){
     mid=low+(high-low)/2;
        cout<<low<<" "<<high<<" "<<mid<<" "<<number_of_k(arr,n,mid)<<endl;

    if(number_of_k(arr,n,mid)<=k)
       high=mid;
    else
        low=mid+1;
     }
  return low;
  }


 int main()
 {
      ll n,k;
       cin>>n>>k;
       ll arr[n];
       for(ll i=0;i<n;i++)cin>>arr[i];
       cout<<min_max_bin_search(arr,n,k)<<endl;

   return 0;
 }