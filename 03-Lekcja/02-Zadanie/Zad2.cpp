#include <iostream>
using namespace std;

int main() {
    int a, b;
    char znak;

    cout << "Podaj pierwsza liczbe: ";
    cin >> a;

    cout << "Podaj znak dzialania (+, -, *, /, %): ";
    cin >> znak;

    cout << "Podaj druga liczbe: ";
    cin >> b;

    switch (znak) {
        case '+':
            cout << "Wynik: " << a + b;
            break;

        case '-':
            cout << "Wynik: " << a - b;
            break;

        case '*':
            cout << "Wynik: " << a * b;
            break;

        case '/':
            if (b != 0)
                cout << "Wynik: " << (double)a / b;
            else
                cout << "Blad: nie mozna dzielic przez zero!";
            break;

        case '%':
            if (b != 0)
                cout << "Wynik: " << a % b;
            else
                cout << "Blad: nie mozna wykonac modulo przez zero!";
            break;

        default:
            cout << "Blad: niepoprawny znak dzialania!";
    }

    return 0;
}
