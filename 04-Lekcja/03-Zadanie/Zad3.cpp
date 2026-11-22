#include <iostream>
using namespace std;

int main() {
    int liczba;
    int suma = 0;
    int licznik = 0;
    int minLiczba, maxLiczba;

    cin >> liczba;

    minLiczba = maxLiczba = liczba;

    while (liczba != 0) {
        suma += liczba;
        licznik++;

        if (liczba > maxLiczba)
            maxLiczba = liczba;

        if (liczba < minLiczba)
            minLiczba = liczba;

        cin >> liczba;
    }

    double srednia = (double)suma / licznik;

    cout << "Najwieksza liczba: " << maxLiczba << endl;
    cout << "Najmniejsza liczba: " << minLiczba << endl;
    cout << "Suma: " << suma << endl;
    cout << "Srednia: " << srednia << endl;

    return 0;
}
