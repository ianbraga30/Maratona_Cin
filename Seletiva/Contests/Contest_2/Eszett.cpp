
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string lmao;
    string pepelaugh;
    string original;
    string poggers;
    bool nada;
    bool temduaspapai;
    int quantidade = 1;
    while (quantidade--)
    {
        cin >> lmao;
        temduaspapai = false;
        pepelaugh = "";
        poggers = "";
        original = "";
        int contador = 0;
        for (int x = 0; x < lmao.size(); x++)
        {
            original += tolower(lmao[x]);
            if (lmao[x] == 'S')
            {
                contador += 1;
            }
        }
        if (contador == 3)
        {
            temduaspapai = true;
        }
        for (int i = 0; i < lmao.size(); i++)
        {
            if (lmao[i] == 'S' and lmao[i + 1] == 'S')
            {
                if (lmao[i + 1] == 'S' and lmao[i + 2] == 'S')
                {
                    poggers += "sB";
                    pepelaugh += "Bs";
                    lmao[i + 1] = '(';
                    lmao[i + 2] = '(';
                }
                else
                {
                    pepelaugh += 'B';
                    poggers += 'B';
                    lmao[i + 1] = '(';
                }
            }
            else if (lmao[i] == '(')
            {
                nada = true;
            }
            else
            {
                pepelaugh += tolower(lmao[i]);
                poggers += tolower(lmao[i]);
            }
        }
        if (!temduaspapai)
        {
            if (original == pepelaugh)
            {
                cout << pepelaugh << endl;
            }
            else
            {
                cout << original << endl;
                cout << pepelaugh << endl;
            }
        }
        else
        {
            if (poggers == pepelaugh)
            {
                if (original == pepelaugh and pepelaugh == poggers)
                {
                    cout << original;
                }
                else
                {
                    cout << original << endl;
                    cout << pepelaugh << endl;
                }
            }
            else
            {
                cout << original << endl;
                cout << pepelaugh << endl;
                cout << poggers << endl;
            }
        }
    }
}
