#include <iostream>

using namespace std;

int main() {
    double number1, number2;
    char operation;

    cout << "Enter two numbers : ";
    cin >> number1 >> number2;

    cout << "Choose an operation to be performed : "<<endl;
    cout<<" + , - , * , / "<<endl;
    cin >> operation;

    double answer;
    bool is_valid = true;

    switch (operation) {
        case '+':
            answer = number1 + number2;
            break;
        case '-':
            answer = number1 - number2;
            break;
        case '*':
            answer = number1 * number2;
            break;
        case '/':
            if (number2 != 0) {
                answer = number1 / number2;
            } else {
                cout << "Error : Division by zero is not possible." << endl;
                is_valid = false;
            }
            break;
        default:
            cout << "Error : Invalid operation." << endl;
            is_valid = false;
            break;
    }

    if (is_valid) {
        cout << "The result is: " << answer << endl;
    }

    return 0;
}

