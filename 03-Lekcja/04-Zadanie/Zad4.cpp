#include <iostream>
using namespace std;

int main() {
    int o1, o2, o3, o4, o5;
    int niedostateczne = 0;

    cout << "Podaj 5 ocen: ";
    cin >> o1 >> o2 >> o3 >> o4 >> o5;

    double srednia = (o1 + o2 + o3 + o4 + o5) / 5.0;

    if (o1 == 1) niedostateczne++;
    if (o2 == 1) niedostateczne++;
    if (o3 == 1) niedostateczne++;
    if (o4 == 1) niedostateczne++;
    if (o5 == 1) niedostateczne++;

    cout << "Srednia ocen: " << srednia << endl;
    cout << "Liczba ocen niedostatecznych: " << niedostateczne << endl;

    return 0;
}
