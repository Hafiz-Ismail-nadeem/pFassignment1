
#include<iostream>
using namespace std;
int main() {
    int num1, num2;  // Stores two input numbers
    char op;         // Stores the operation symbol

    // Get user inputs
    cout << "Enter first numbers : ";
    cin >> num1;
    cout << "Enter second numbers : ";
    cin >> num2;
    cout << "Enter the operation : ";
    cin >> op;

    // Main switch handles different operations
    switch (op)
    {
    case '+':  // Addition
        cout << "Result : " << num1 + num2;
        break;

    case '-':  // Subtraction
        cout << "Result : " << num1 - num2;
        break;

    case '*':  // Multiplication
        cout << num1 * num2;
        break;

    case '/':  // Division with zero check
        switch (num2) {
        case 0:  // Prevent division by zero
            cout << "Division with zero is not allowed.";
            break;
        default:  // Normal division
            cout << num1 / num2;
        }
        break;

    case '%':  // Modulus with zero check
        switch (num2) {
        case 0:  // Prevent modulus by zero
            cout << "Enter a valid second number."; 
            break;
        default:  // Normal modulus
            cout << num1 % num2;
        }
        break;

    case '>':  // Greater than comparison
        switch (num1 > num2) {
        case 1:  // True case
            cout << num1 << " is greater than " << num2;
            break;
        default:  // False case
            cout << num1 << " is not greater than " << num2;
        }
        break;

    case '<':  // Less than comparison
        switch (num1 < num2) {
        case 1:  // True case
            cout << num1 << " is less than " << num2;
            break;
        default:  // False case
            cout << num1 << " is not less than " << num2;
        }
        break;

    case '=':  // Equality check
        switch (num1 == num2) {
        case 1:  // Numbers are equal
            cout << " Entered numbers are equal. ";
            break;
        default:  // Numbers are different
            cout << num1 << " is not equal to " << num2;
        }
        break;

    case '&':  // Check if both numbers are even
        switch (num1 % 2 == 0) {
        case 1:  // First number is even
            switch (num2 % 2 == 0) {
            case 1:  // Both even
                cout << "Both are even." << endl;
                break;
            case 0:  // Only first is even
                cout << "Both are not even." << endl;  // Message could be clearer
            }
            break;
        case 0:  // First number is odd
            cout << "Both are not even.";  // At least one is odd
        }
        break;

    case '|':  // Check if at least one is odd
        switch (num1 % 2 == 0) {
        case 1:  // First number is even
            switch (num2 % 2 == 0) {
            case 1:  // Both even = no odd numbers
                cout << "Atleast one is not odd." << endl;  // Confusing message
                break;
            case 0:  // Second is odd = found odd number
                cout << "Atleast one is odd." << endl;
            }
            break;
        case 0:  // First number is odd = found odd number
            cout << "Atleast one is odd.";  // Typo: "At least"
        }
        break;

    default:  // Invalid operator handler
        cout << "Enter a valid operator.";
        return 0;
    }
}