#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int t;
    cin >> n >> t;
    vector<int> machines(n);
    for (int i = 0; i < n; i++)
    {
        cin >> machines[i];
    }
    long long int minimo = 0;
    long long int maximo = 1e18;
    while (minimo < maximo)
    {
        long long int mid = (maximo + minimo) / 2;
        long long int quantidade = 0;
        for (int i = 0; i < n; i++)
        {
            quantidade += min(mid / machines[i], (long long int)1e9);
        }
        if (quantidade >= t)
        {
            maximo = mid;
        }
        else
        {
            minimo = mid + 1;
        }
    }
    cout << minimo << endl;
}
