#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int EMP = 12;
    double quarterSum, total = 0;

    for (int i = 1; i <= EMP; i++) {
        quarterSum = 0;
        for (int m = 1; m <= 3; m++) {
            double salary;
            string month = (m == 1) ? "Март" : (m == 2) ? "Апрель" : "Май";
            cout << "Сотрудник " << i << ", " << month << ": ";
            cin >> salary;
            quarterSum += salary;
        }
        cout << "Сотрудник " << i << " за квартал: " << quarterSum << endl;
        total += quarterSum;
    }

    cout << "\nОбщая выплата по всем сотрудникам за квартал: " << total << endl;
    return 0;
}