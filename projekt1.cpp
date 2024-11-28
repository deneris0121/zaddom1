#include <iostream>
#include <vector>

using namespace std;

vector<bool> tab={0,0,1};

void powieksz(int a)
{
    for(int i=tab.size();i<=a;i++)
    {
        tab.push_back(1);
    }
    for(int i=2;i<tab.size();i++)
    {
        if(tab[i]==1)
        {
            for(int j=2*i;j<=a;j+=i)
            {
                if(tab[j]==1) tab[j]=0;
            }
        }
    }
}

bool pierwsza(int a)
{
    if(a>=tab.size())
    {
        powieksz(a);
    }
    return tab[a];
}

int main() {
    int a, b;
    cout<<tab.size();
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
