#include <iostream>
using namespace std;

int main() {
    int N = 7;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j || i + j == N - 1 || j == N / 2)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}