#include <iostream>
using namespace std;

int main() {
    const int n = 12;
    int numrat[n];

    cout << "Shtypni " << n << " numra te plote:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "numrat[" << i << "] = ";
        cin >> numrat[i];
    }

    int maksimumi = numrat[0];
    int nrNjeShifror = 0;
    int nrKushtit = 0;

    for (int i = 0; i < n; i++) {
        if (numrat[i] > maksimumi) {
            maksimumi = numrat[i];
        }

        if (numrat[i] > -10 && numrat[i] < 10) {
            nrNjeShifror++;
 }

        if (numrat[i] % 20 == 0 || numrat[i] < 99) {
            nrKushtit++;
        }
    }

    int nrSaMaksimumi = 0;
    for (int i = 0; i < n; i++) {
        if (numrat[i] == maksimumi) {
            nrSaMaksimumi++;
        }
    }

    cout << "\nOutput:" << endl;
    cout << "Maksimumi: " << maksimumi << endl;
    cout << "Sa numra jane nje-shifror: " << nrNjeShifror << endl;

    cout << "Numrat qe jane te plotpjestueshem me 20 OSE me te vegjel se 99: ";
    for (int i = 0; i < n; i++) {
        if (numrat[i] % 20 == 0 || numrat[i] < 99) {
            cout << numrat[i] << " ";
        }
    }
    cout << endl;

    cout << "Sa numra jane sa maksimumi: " << nrSaMaksimumi << endl;
    cout << "Sa numra plotesojne kushtin (%20==0 ose <99): " << nrKushtit << endl;

    return 0;
}
