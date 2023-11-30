#include <bits/stdc++.h>

using namespace std;

void DFS(int start, int number){
    





}







int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> cats;
    vector<vector<int>> adj;
    vector<bool> visited;
    int n, m; cin >> n >> m;
    cats.resize(n);
    adj.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cats[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    visited.resize(n, false);

    

    
}
