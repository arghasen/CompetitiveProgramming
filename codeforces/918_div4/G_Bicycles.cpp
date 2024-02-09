#include <bits/stdc++.h>
using namespace std;
#define F(i, L, R) for (int i = L; i < R; i++) // next four are for "for loops"
#define FE(i, L, R) for (int i = L; i <= R; i++)
#define FF(i, L, R) for (int i = L; i > R; i--)
#define FFE(i, L, R) for (int i = L; i >= R; i--)
const long long inf = 1e18;
long long traverse(const vector<vector<pair<int, int>>> &adj, const vector<int> &costs, int n)
{
    std::vector<std::vector<int64_t>> dist(n, std::vector<int64_t>(n + 1, std::numeric_limits<int64_t>::max()));
    std::vector<std::vector<bool>> vis(n, std::vector<bool>(n + 1, false));
    dist[0][0] = 0;
    std::priority_queue<std::pair<int64_t, std::pair<int, int>>> pq;
    pq.push({0, {0, 0}});
    while (!pq.empty())
    {
        auto [_, p] = pq.top();
        pq.pop();
        int curCity = p.first;
        int curBike = p.second;
        if (vis[curCity][curBike] || dist[curCity][curBike] == std::numeric_limits<int64_t>::max())
            continue;
        vis[curCity][curBike] = true;
        for (auto nextCity : adj[curCity])
        {
            int v = nextCity.first;
            int w = nextCity.second;
            int nextBike = (costs[curCity] < costs[curBike]) ? curCity : curBike;
            int c = min(costs[curCity], costs[curBike]);
            if (dist[v][nextBike] > dist[curCity][curBike] + 1ll * w * c)
            {
                dist[v][nextBike] = dist[curCity][curBike] + 1ll * w * c;
                //   cout << v << " " << curBike << " " << dist[v][nextBike] << endl;
                pq.push({-dist[v][nextBike], {v, nextBike}});
            }
        }
    }
    int64_t res = std::numeric_limits<int64_t>::max();
    for (int i = 0; i <= n; i++)
    {
        res = std::min(res, dist[n - 1][i]);
    }
    return res;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<pair<int, int>>> adj(n, vector<pair<int, int>>());
        while (m--)
        {
            int x, y, z;
            cin >> x >> y >> z;
            adj[x - 1].push_back(make_pair(y - 1, z));
            adj[y - 1].push_back(make_pair(x - 1, z));
        }
        vector<int> costs;
        vector<vector<int>> visited(n, vector<int>(n, 0));
        F(i, 0, n)
        {
            int x;
            cin >> x;
            costs.push_back(x);
        }
        cout << traverse(adj, costs, n) << endl;
    }
}