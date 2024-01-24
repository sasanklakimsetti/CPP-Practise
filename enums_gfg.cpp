/*Days of the Week:
Define an enum to represent the days of the week (e.g., Monday, Tuesday, etc.). Write a program that takes a day as input and prints the next day.*/
#include <iostream>
using namespace std;

// Define an enum for Days of the week
enum Days {Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    // Declare an enum variable
    Days today;
    int day;
    cin>>day;
    today=static_cast<Days>(day);

    // Print the enum value
    cout << "Today is ";

    // You can use a switch statement to provide a more descriptive output
    switch (day) {
        case Monday:
            cout << "Monday";
            break;
        case Tuesday:
            cout << "Tuesday";
            break;
        case Wednesday:
            cout << "Wednesday";
            break;
        case Thursday:
            cout << "Thursday";
            break;
        case Friday:
            cout << "Friday";
            break;
        case Saturday:
            cout << "Saturday";
            break;
        case Sunday:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid day";
    }

    cout << endl;

    return 0;
}
