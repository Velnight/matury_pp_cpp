#include <bits/stdc++.h>
using namespace std;
int main()
{

    int s;
    int licznik;
    ifstream f ("cyfry.txt");

    while (f>>s)
    {
            if(s % 2 == 0)
            {
                licznik++;
            }

    }
    cout << licznik << "\n";
}
