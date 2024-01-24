#include <iostream>
#include <iomanip> // For setprecision

using namespace std;

int main() {
    const double PI = 3.14;

    double radius;
    cin >> radius;

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    // Set precision to two decimal places
    cout << fixed << setprecision(2);

    cout << circumference << endl;
    cout << area << endl;

    return 0;
}