#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) //next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)

int getSumOfApples(vector<int> &sums, int i, int j)
{
    if (i == 0)
        return sums[j];
    else
        return (sums[j] - sums[i - 1]);
}
vector<int> getPrefixSums(vector<int> &A, int N)
{
    vector<int> sums(N);
    sums[0] = A[0];
    for (int i = 1; i < N; i++)
        sums[i] = sums[i - 1] + A[i];
    return sums;
}

int solution(vector<int> &A, int K, int L)
{
    int N = A.size();
    if(K+L>N)
        return -1;
    vector<int> sums = getPrefixSums(A, N);

    int maxApplesCombined = getSumOfApples(sums, N - L - K, N - K - 1) +
                            getSumOfApples(sums, N - K, N - 1);

    int maxForAlice = getSumOfApples(sums, N - K, N - 1);

    for (int i = N - L - K - 1; i >= 0; i--)
    {
        int cur = getSumOfApples(sums, i + L, i + L + K - 1);
        cout << i + L << " " << i + L + K - 1 << " " << cur << endl;
        if (cur >= maxForAlice)
        {
            cout << cur << maxForAlice << "m" << endl;
            maxForAlice = cur;
        }

        cur = getSumOfApples(sums, i, i + L - 1) + maxForAlice;
        cout << i << " " << i + K - 1 << "a" << endl;
        if (cur >= maxApplesCombined)
        {
            cout << cur << " " << maxApplesCombined << "max" << endl;
            maxApplesCombined = cur;
        }
    }
    cout<<endl;
    swap(K,L);
    int maxApplesCombined2 = getSumOfApples(sums, N - L - K, N - K - 1) +
                            getSumOfApples(sums, N - K, N - 1);

    int maxForAlice2 = getSumOfApples(sums, N - K, N - 1);

    for (int i = N - L - K - 1; i >= 0; i--)
    {
        int cur = getSumOfApples(sums, i + L, i + L + K - 1);
        cout << i + L << " " << i + L + K - 1 << " " << cur << endl;
        if (cur >= maxForAlice2)
        {
            cout << cur << maxForAlice2 << "m" << endl;
            maxForAlice = cur;
        }

        cur = getSumOfApples(sums, i, i + L - 1) + maxForAlice2;
        cout << i << " " << i + L - 1 << "a" << endl;
        if (cur >= maxApplesCombined2)
        {
            cout << cur << " " << maxApplesCombined2 << "max" << endl;
            maxApplesCombined2 = cur;
        }
    }
    return max(maxApplesCombined,maxApplesCombined2);
}

// Driver code to test above methods
int main()
{
    vector<int> arr{10, 19, 15};
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);   // redirects standard input
    freopen("output.txt", "w", stdout); // redirects standard output
#endif

    // K will be given such that (N >= 2K)
    int K = 2;
    int L = 2;
    cout << solution(arr, K, L);

    return 0;
}
