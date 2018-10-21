#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0; i<n;i++)
    {
        cin>>v[i];
    }
    copy(v.crbegin(),v.crend(),ostream_iterator<int>(cout," "));
    return 0;
}
