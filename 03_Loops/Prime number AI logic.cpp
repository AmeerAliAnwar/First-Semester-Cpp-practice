#include <iostream>
using namespace std;
int main() {
    cout << "Enter a number: ";
    int x;
    cin >> x;

    cout << "Prime numbers from " << x << " down to 2 are:" << endl;

    for (int a = x; a >= 2; a--) {
        int y = 1;

        for (int i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                y = 0;
                break;
            }
        }

        if (y==1) {
            cout << a << endl;
        }
    }
    return 0;
}
