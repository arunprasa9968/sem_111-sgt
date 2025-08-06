#include<iostream>
using namespace std;

int main(){
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operation (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Sum = " << a + b << endl;
            break;
        case '-':
            cout << "Subtraction = " << a - b << endl;
            break;
        case '*':
            cout << "Multiplication = " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Division = " << a / b << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
    }

    return 0;
}