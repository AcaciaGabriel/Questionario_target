#include <iostream>
using namespace std;
bool Fibonacci(int n) {
    if (n == 0 || n == 1) {
        return true;
    }
    int a = 0;
    int b = 1;
    int c;

    while (true) {
        c = a + b;
        if (c == n) {
            return true;
        } else if (c > n) {
            return false;
        }
        a = b;
        b = c;
    }
}
int main() {
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if (Fibonacci(num)) {
        cout << num << " esta na sequência Fibonacci." << endl;
    } else {
        cout << num << " nao esta na sequência Fibonacci." << endl;
    }
    return 0;
}
