/*
*   10873�� - ���丮�� N!
*   ��� �Լ�
*/

#include <iostream>

using namespace std;

int factorial (int n) {
    if (n < 2) return 1;

    return n * factorial(n - 1);
}

int main() {

    int n;
    cin >> n;

    cout << factorial(n) << "\n";

    return 0;
}