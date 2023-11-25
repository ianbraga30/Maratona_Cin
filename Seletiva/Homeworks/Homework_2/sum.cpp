#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tamanho;
    int x;
    int index = 0;
    cin >> tamanho >> x;
    // basicamente iremos mapear solucoes, a + x-a, o count checa se houve mesmo
    map<int, int> relacao;
    for (int i = 0; i < tamanho; i++)
    {
        int valor;
        cin >> valor;
        index = i + 1;
        if (relacao.count(x - valor))
        {
            cout << index << " " << relacao[x - valor] << endl;
            return 0;
        }
        relacao[valor] = index;
    }
    cout << "IMPOSSIBLE";
}
