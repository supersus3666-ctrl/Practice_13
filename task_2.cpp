#include <iostream>
using namespace std;

int main() {
    for (int n = 2; n <= 1000; n++) {
        bool isPrime = true;
        for (int d = 2; d * d <= n; d++) {
            if (n % d == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << n << " ";
    }
    cout << endl;
    return 0;
}