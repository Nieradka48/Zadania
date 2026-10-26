#include <iostream>

using namespace std;

int main(){
   int a,b;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << "Pierwsza liczba to: " << a << endl;
    cout << "Druga liczba to: " << b << endl;
    if(a==b)
    {
        cout << "Liczby sa rowne" << endl;
    }
    else
    {
        cout << "Liczby nie sa rowne" << endl;
        if(a>b)
        {
        cout << "Pierwsza liczba jest wieksza" << endl;
        }
        else
        {
        cout << "Druga liczba jest wieksza" << endl;
        }
        if(a<b)
        {
        cout << "Pierwsza liczba jest mniejsza" << endl;
        }
        else
        {
        cout << "Druga liczba jest mniejsza" << endl;
        }


return 0;
    }
}
