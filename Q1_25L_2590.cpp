#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    float mprice;  // Variable to store meal price
    float stax;    // Variable to store sales tax amount

    // Display menu header with formatted columns
    cout << "Code" << setw(10) << "Meal" << setw(48) << "Per Kg price in pakistani rupees" << endl;

    // Display menu items with codes and prices
    cout << left << setw(10) << "1" << left << setw(20) << "Chicken Handi" << setw(10) << "1800" << endl;
    cout << left << setw(10) << "2" << left << setw(20) << "Chicken Karahi" << setw(10) << "2000" << endl;
    cout << left << setw(10) << "3" << left << setw(20) << "Chicken Tikka" << setw(10) << "2200" << endl;
    cout << left << setw(10) << "4" << left << setw(20) << "Chicken Haleem" << setw(10) << "500" << endl;
    cout << left << setw(10) << "5" << left << setw(20) << "Creamy Chicken" << setw(10) << "2500" << endl;

    // Display separator line
    cout << "***********************************************" << endl;

    // Declare variables for meal codes and their corresponding prices
    int code, a = 1800, b = 2000, c = 2200, d = 500, e = 2500;

    // Get meal code from user
    cout << "Enter the code of the meal :   ";
    cin >> code;

    // Validate meal code input
    if (code <= 0 || code > 5) {
        cout << "Invalide code ";
        return 0;  // Exit program if invalid code
    }

    // Assign meal price based on code using switch statement
    switch (code) {
    case 1:
        mprice = a;
        break;
    case 2:
        mprice = b;
        break;
    case 3:
        mprice = c;
        break;
    case 4:
        mprice = d;
        break;
    case 5:
        mprice = e;
        break;
    }

    // Display separator line
    cout << endl << "***********************************************" << endl;

    // Get quantity from user
    float quantity;
    cout << "Enter the quantity in Kgs :   ";
    cin >> quantity;

    // Validate quantity input
    if (quantity <= 0) {
        cout << "Invalid Quantity ";
        return 0;  // Exit program if invalid quantity
    }

    // Calculate total meal price based on quantity
    mprice = mprice * quantity;

    // Calculate sales tax based on total price
    if (mprice < 1000) {
        stax = 0;  // No tax if price is less than 1000
    }
    else if (mprice > 1000 && mprice <= 3000) {
        stax = mprice * (.02);  // 2% tax if price between 1000 and 3000
    }
    else if (mprice > 3000) {
        stax = mprice * (.05);  // 5% tax if price above 3000
    }

    // Display separator line
    cout << endl << "***********************************************" << endl;

    // Get currency choice from user
    int currency;
    cout << "Enter the currency code in which you want to pay (1 for pkr, 2 for dollar , 3 for euro ) :   ";
    cin >> currency;

    // Validate currency code input
    if (currency <= 0 || currency > 3) {
        cout << "Invalid currency code.";
        return 0;  // Exit program if invalid currency code
    }

    // Convert prices to selected currency if not PKR
    if (currency == 2) {  // Convert to dollars
        mprice = mprice / 165;  // Assuming 1 dollar = 165 PKR
        stax = stax / 165;
    }
    else if (currency == 3) {  // Convert to euros
        mprice = mprice / 193;  // Assuming 1 euro = 193 PKR
        stax = stax / 193;
    }

    // Calculate total amount (meal price + tax)
    float totl;
    totl = mprice + stax;

    // Display separator line
    cout << endl << "***********************************************" << "\n";

    // Display meal price in selected currency with appropriate symbol
    if (currency == 1) {
        cout << "Meal price : " << "Rs" << fixed << setprecision(2) << mprice << endl;
    }
    else if (currency == 2) {
        cout << "Meal price : " << "$" << fixed << setprecision(2) << mprice << endl;
    }
    else if (currency == 3) {
        cout << "Meal price : " << "€" << fixed << setprecision(2) << mprice << endl;
    }

    // Display sales tax in selected currency with appropriate symbol
    if (currency == 1) {
        cout << "Sale tax : " << "Rs" << fixed << setprecision(2) << stax << endl;
    }
    else if (currency == 2) {
        cout << "Sale tax : " << "$" << fixed << setprecision(2) << stax << endl;
    }
    else if (currency == 3) {
        cout << "Sale tax : " << "€" << fixed << setprecision(2) << stax << endl;
    }

    // Display total amount in selected currency with appropriate symbol
    if (currency == 1) {
        cout << "Total price : " << "Rs" << fixed << setprecision(2) << totl;
    }
    else if (currency == 2) {
        cout << "Total price : " << "$" << fixed << setprecision(2) << totl;
    }
    else if (currency == 3) {
        cout << "Total price : " << "€" << fixed << setprecision(2) << totl;
    }

    return 0;
}