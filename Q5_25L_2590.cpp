#include<iostream>
using namespace std;
int main() {
    int byear, bday, bmonth;          // Your birth date
    int currentyear, currentday, currentmonth;  // Today's date
    int year, days, months;           // Your age result

    // Get your birthday
    cout << "Enter your date of birth: " << endl;
    cout << "day:";
    cin >> bday;
    cout << "Month: ";
    cin >> bmonth;
    cout << "Year: ";
    cin >> byear;

    // Get today's date
    cout << "\nEnter current date:" << endl;
    cout << "day :";
    cin >> currentday;
    cout << "Month: ";
    cin >> currentmonth;
    cout << "Year: ";
    cin >> currentyear;

    // Start with simple year difference
    year = currentyear - byear;

    // Check if birthday month has happened this year
    if (currentmonth >= bmonth) {
        months = currentmonth - bmonth;  // Yes, birthday month passed
    }
    else {
        months = 12 - bmonth + currentmonth;  // No, borrow months from previous year
        year--;  // Take away 1 year
    }

    // Check if birthday day has happened this month
    if (currentday >= bday) {
        days = currentday - bday;  // Yes, birthday day passed
    }
    else {
        // No - need to borrow days from previous month
        int premonthdays;

        // Figure out how many days were in last month
        switch (currentmonth - 1) {
        case 0: premonthdays = 31; break;  // December
        case 1: premonthdays = 31; break;  // January
        case 2:  // February - check leap year
            if ((currentyear % 4 == 0 && currentyear % 100 != 0) || (currentyear % 400 == 0))
                premonthdays = 29;  // Leap year
            else
                premonthdays = 28;  // Normal year
            break;
        case 3: premonthdays = 31; break;  // March
        case 4: premonthdays = 30; break;  // April
        case 5: premonthdays = 31; break;  // May
        case 6: premonthdays = 30; break;  // June
        case 7: premonthdays = 31; break;  // July
        case 8: premonthdays = 31; break;  // August
        case 9: premonthdays = 30; break;  // September
        case 10: premonthdays = 31; break; // October
        case 11: premonthdays = 30; break; // November
        default: premonthdays = 30;
        }

        // Calculate borrowed days
        days = premonthdays - bday + currentday;
        months--;  // Take away 1 month

        // Fix if months went negative
        if (months < 0) {
            months = 11;
            year--;
        }
    }

    // Show final result
    cout << "\nYour exact age is: " << endl;
    cout << year << " years, " << months << " months, and " << days << " days" << endl;
    return 0;
}