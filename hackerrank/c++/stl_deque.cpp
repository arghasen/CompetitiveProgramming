#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> d;
     int i; 
    for (i = 0; i < k; ++i) 
    {
        while(!d.empty() && arr[i]>arr[d.back()])
            d.pop_back();
        d.push_back(i);
    }
    for ( ; i < n; ++i) 
    {
        cout<<arr[d.front()]<<" ";
         while ( (!d.empty()) && d.front() <= i - k) 
            d.pop_front();
          while(!d.empty() && arr[i]>arr[d.back()])
            d.pop_back();
        d.push_back(i);
    }
    cout << arr[d.front()]<<endl; 
}

int main(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}