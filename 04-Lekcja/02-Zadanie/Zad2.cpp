#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe elementow: ";
    cin >> n;

    double liczba, suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe: ";
        cin >> liczba;

        suma += liczba;
    }

    double srednia = suma / n;

    cout << "Suma = " << suma << endl;
    cout << "Srednia = " << srednia << endl;

    return 0;
}
