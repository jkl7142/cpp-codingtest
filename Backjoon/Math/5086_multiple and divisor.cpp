/*
*   5086번 - 배수와 약수
*/

#include <iostream>

using namespace std;

int main() {

    while (true) {
        int a, b;
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        if (a < b && b % a == 0) {
            cout << "factor" << "\n";
        }
        else if (a % b == 0) {
            cout << "multiple" << "\n";
        }
        else
            cout << "neither" << "\n";
    }

    return 0;
}