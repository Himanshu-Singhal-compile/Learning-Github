#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter: num operator num (e.g. 5 + 3): ";
    cin >> a >> op >> b;

    if (op == '+') cout << a + b;
    else if (op == '-') cout << a - b;
    else if (op == '*') cout << a * b;
    else if (op == '/') {
        if (b == 0) cout << "Cannot divide by zero";
        else cout << a / b;
    }
    else cout << "Invalid operator";

    cout << endl;
    return 0;
}
