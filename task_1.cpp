#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "Введите A и B: ";
    cin >> A >> B;

    for (int i = A; i <= B; i++) {
        int count = 0;
        cout << "Делители числа " << i << ": ";
        for (int d = 1; d <= i; d++) {
            if (i % d == 0) {
                cout << d << " ";
                count++;
            }
        }
        cout << "| всего: " << count << endl;
    }
    return 0;
}