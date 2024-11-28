#include <iostream>

using namespace std;

int silnia(int a)
{
    int wyn=1;
    for(int i=2;i<=a;i++)
    {
        wyn=wyn*i;
    }
    return wyn;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
