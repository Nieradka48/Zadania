#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string imie;
    int wiek;
    double wzrost;

    cout << "Podaj imie: ";
    cin >> imie;

    cout << "Podaj wiek: ";
    cin >> wiek;

    cout << "Podaj wzrost (w metrach): ";
    cin >> wzrost;

    cout << "\nImie: " << imie << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "Wzrost: " << fixed << setprecision(2) << wzrost << endl;

    return 0;
}
