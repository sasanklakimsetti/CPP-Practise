#include <iostream>

// Function to shift values one position to the right
void rightShift(int& a, int& b, int& c) {
    int temp = c;
    c = b;
    b = a;
    a = temp;
}

// Function to get the largest value among three integers
int& getLargest(int& a, int& b, int& c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int x, y, z;
    std::cin >> x >> y >> z; // Input initial values

    // Print original values before the right shift operation
    std::cout << "Original values: " << x << " " << y << " " << z << std::endl;

    // Call rightShift function to shift values to the right
    rightShift(x, y, z);

    // Print values after the right shift operation
    std::cout << "Values after right shift: " << x << " " << y << " " << z << std::endl;

    // Input new value for the largest variable
    int largestValue;
    std::cin >> largestValue;

    // Get reference to the largest value after the shift
    int& largestRef = getLargest(x, y, z);

    // Modify the largest value using the reference
    largestRef = largestValue;

    // Print values after modifying the largest value
    std::cout << "Values after modifying largest: " << x << " " << y << " " << z << std::endl;

    // Print the largest value among the three variables
    std::cout << "Largest value: " << getLargest(x, y, z) << std::endl;

    return 0;
}