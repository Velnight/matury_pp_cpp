#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    int suma;
    int licznik;
    ifstream f("hasla.txt");

    while (f>>s)
    {
        for (int i = 0; i<s.size() - 1; i++)
        {
            suma = 0;
            suma = (int)s[i] + (int)s[i + 1];
            if(suma == 220)
            {
                cout << s << "\n";
                licznik++;
                break;
            }
        }
    }
    cout << licznik<< endl;
}
