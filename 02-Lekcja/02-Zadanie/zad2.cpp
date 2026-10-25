#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double ocena1, ocena2, ocena3, ocena4, ocena5;
    double srednia;

    cout << "Podaj 5 ocen: ";
    cin >> ocena1 >> ocena2 >> ocena3 >> ocena4 >> ocena5;

    srednia = (ocena1 + ocena2 + ocena3 + ocena4 + ocena5) / 5;

    cout << fixed << setprecision(2);
    cout << "Srednia ocen wynosi: " << srednia << endl;

    return 0;
}
