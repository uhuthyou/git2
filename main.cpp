// main.cpp
#include <iostream>
#include "function.h"

using namespace std;

int main() {
    double a, b;
    char operation;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
    case '+':
        cout << "Result: " << Function::add(a, b) << endl;
        break;
    case '-':
        cout << "Result: " << Function::subtract(a, b) << endl;
        break;
    case '*':
        cout << "Result: " << Function::multiply(a, b) << endl;
        break;
        default:
            cout << "Incorrect operation!" << endl;
            break;
   }

    return 0;
}
