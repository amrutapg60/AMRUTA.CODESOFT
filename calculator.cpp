#include <iostream> 
using namespace std;

int main() {
    double num1, num2;      
    char operation;         
    double result;          

    
    cout << "Enter first number: ";
    cin >> num1;

   
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    
    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation based on the chosen operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;

        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }

    return 0;
}
