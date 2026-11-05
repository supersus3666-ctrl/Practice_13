#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int count = 0;

    for (int a = 0; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            if (b == a) continue;
            for (int c = 0; c <= 9; c++) {
                if (c == a || c == b) continue;
                cout << a << b << c << "\t";
                count++;
            }
        }
    }

    cout << "\n\nВсего комбинаций: " << count << endl;
    cout << "Время в худшем случае: " << count * 3 << " секунд ("
        << count * 3 / 60 << " мин " << count * 3 % 60 << " сек)" << endl;
    return 0;
}