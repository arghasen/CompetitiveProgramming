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
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    int pos;
    cin>>pos;
    vec.erase(vec.begin()+pos-1);
    //cout<<vec.size();
    int pos1,pos2;
    cin>>pos1>>pos2;
    vec.erase(vec.begin()+pos1-1,vec.begin()+pos2-1);
    cout<<vec.size()<<endl;
    copy(vec.begin(),vec.end(),ostream_iterator<int>(cout," "));
    return 0;
}