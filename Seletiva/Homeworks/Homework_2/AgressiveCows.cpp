#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> &v, int vacas, int distMin)
{
    int quantidadevaquinha = 1;
    int primeiro = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        if ((v[i] - primeiro) >= distMin)
        {
            quantidadevaquinha += 1;
            primeiro = v[i];
        }
    }

    return quantidadevaquinha >= vacas;
}

int buscabinaria(vector<int> &coordenadas, int vacas)
{
    int minimo = 0;
    int maxi = coordenadas.back() - coordenadas.front();

    while (minimo < maxi)
    {
        int mid = minimo + (maxi - minimo) / 2;

        if (check(coordenadas, vacas, mid))
        {
            minimo = mid + 1;
        }
        else
        {
            maxi = mid;
        }
    }
    return minimo - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int celeiros;
        int vacas;
        cin >> celeiros >> vacas;
        vector<int> coordenadas(celeiros);
        for (int i = 0; i < celeiros; i++)
        {
            cin >> coordenadas[i];
        }
        sort(begin(coordenadas), end(coordenadas));

        int result = buscabinaria(coordenadas, vacas);
        cout << result << endl;
    }

    return 0;
}
