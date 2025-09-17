#include<iostream>
using namespace std;
int main() {
	int num;  // Variable to store the input number

	// Get number from user
	cout << "Enter the number : ";
	cin >> num;

	// Check if number is even or odd
	if (num % 2 == 0) {
		cout << "The number is even. " << endl;

		// Nested check for even numbers - divisible by 4
		if (num % 4 == 0)
			cout << "The number is divisible y 4." << endl;
		else
			cout << "The number is not divisible by 4." << endl;
	}
	else {
		cout << "The number is odd." << endl;

		// Nested check for odd numbers - divisible by 3
		if (num % 3 == 0)
			cout << "The number is divisible by 3." << endl;
		else
			cout << "The number is not divisible by 3." << endl;
	}
	return 0;
}