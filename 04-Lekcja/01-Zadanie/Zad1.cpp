#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj n: ";
    cin >> n;

    int suma = 0;

    for (int i = 0; i < n; i++) {
        suma += i;
    }

    cout << "Suma = " << suma;

    return 0;
}
