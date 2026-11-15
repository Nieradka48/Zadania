#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    if (b == 0) {
        cout << "Nie mozna sprawdzic podzielnosci przez zero!";
    } else {
        if (a % b == 0)
            cout << a << " jest podzielna przez " << b;
        else
            cout << a << " nie jest podzielna przez " << b;
    }

    return 0;
}
