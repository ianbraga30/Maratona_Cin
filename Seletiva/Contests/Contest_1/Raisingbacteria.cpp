#include <iostream>

using namespace std;

int main()
{
    int numerodesejado = 0;
    int dias = 0;
    cin >> numerodesejado;
    while (numerodesejado > 0)
    {
        dias += numerodesejado % 2;
        numerodesejado = numerodesejado / 2;
    }
    cout << dias << endl;
    return 0;
}