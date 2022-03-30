#include <bits/stdc++.h>
using namespace std;
int main()
{
string a;
int suma = 0;
int suma_max = 0;
int suma_min = 999999999;
string smin;
string smax;
ifstream f("cyfry.txt");
while (f>>a){
for (int i = 0; i < a.size(); i++){
suma += (int)a[i] - 48;
}

if(suma > suma_max){
        smax = a;
    suma_max = suma;
}
if(suma < suma_min){
    smin = a;
    suma_min = suma;
}
        suma = 0;
}
cout << "Suma max = " << suma_max << "\n";
cout << "Suma min = " << suma_min << "\n";
cout << "Liczba sumy max = " << smax << "\n";
cout << "Liczba sumy min = " << smin << "\n";
}
