#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> grau;
vector<int> ordem;
vector<vector<long long int>> adj;
priority_queue<int, vector<int>, greater<int>> pq;

void toposort(){
    for (int i = 0; i < n; i++)
    {
        if (grau[i] == 0)
        {
            pq.push(i);
        }
    }
    while (!pq.empty())
    {
        int u = pq.top();
        pq.pop();
        ordem.push_back(u);
        for (auto v : adj[u])
        {
            grau[v]--;
            if (grau[v] == 0)
            {
                pq.push(v);
            }
        }
        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    adj.resize(n);
    grau.resize(n);
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        grau[b]++;
    }

    toposort();
    if (ordem.size() != n)
    {
        cout << "Sandro fails." << endl;
    }
    else
    {
        for (auto i : ordem)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
