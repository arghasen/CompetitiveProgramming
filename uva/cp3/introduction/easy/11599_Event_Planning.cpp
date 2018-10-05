#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif
    int N, B, H, W, cost;
    while (cin >> N >> B >> H >> W)
    {
        int min_cost = INT_MAX;
        for (int h = 0; h < H; h++)
        {
            cin >> cost;
            vector<int> beds(W);

            for (int i = 0; i < W; i++)
            {
                cin >> beds[i];
            }
            int max_beds = *max_element(beds.begin(), beds.end());
            if (max_beds > N)
                min_cost = min(min_cost, cost * N);
        }
        if(min_cost<B)
            cout<<min_cost<<endl;
        else
            cout<<"stay home"<<endl;
    }
    return 0;
}