#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<vector<int>> adj(n + 1); // adjascency list for the tree
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        map<pair<int, int>, bool> enemy_visit; // map to track enemy visits
        // BFS to get shortest path from a to b in a tree
        auto bfs = [&](int start, int goal)
        {
            queue<int> q;
            vector<int> parent(n + 1, -1);
            q.push(start);
            parent[start] = 0;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                for (int i : adj[node])
                {
                    if (parent[i] == -1)
                    {
                        parent[i] = node;
                        q.push(i);
                    }
                }
            }
            vector<int> path;
            int curr = goal;
            while (curr != 0)
            {
                path.push_back(curr);
                curr = parent[curr];
            }
            reverse(path.begin(), path.end());
            return path;
        };
        for (int i = 0; i < m; ++i)
        {
            int a, b;
            cin >> a >> b;
            vector<int> path = bfs(a, b);
            for (int t = 1; t <= (int)path.size(); ++t)
            {
                enemy_visit[make_pair(path[t - 1], t)] = true;
            }
        }
        queue<pair<int, int>> q;
        set<pair<int, int>> vis;
        q.push(make_pair(x, 1));
        vis.insert(make_pair(x, 1));
        int ans = -1;
        while (!q.empty())
        {
            pair<int, int> curr = q.front();
            q.pop();
            int u = curr.first;
            int t = curr.second;
            if (u == y)
            {
                ans = t;
                break;
            }
            for (int v : adj[u])
            {
                pair<int, int> next = make_pair(v, t + 1);
                if (!enemy_visit[next] && !vis.count(next))
                {
                    vis.insert(next);
                    q.push(next);
                }
            }
            pair<int, int> mp = make_pair(u, t + 1);
            if (!enemy_visit[mp] && !vis.count(mp))
            {
                vis.insert(mp);
                q.push(mp);
            }
        }
        cout << ans << endl;
    }
    return 0;
}