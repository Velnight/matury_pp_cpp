#include <bits/stdc++.h>
using namespace std;
int main(){

string s;
ifstream f("hasla.txt");
int parzyste = 0;
int nieparzyste = 0;
while (f>>s){
    if(s.size() % 2 == 0) parzyste++;
    else if (s.size() % 2 == 1) nieparzyste++;

}

cout << "Parzyste: " << parzyste << "\n";
cout << "Nieparzyste: " << nieparzyste << "\n";

}
