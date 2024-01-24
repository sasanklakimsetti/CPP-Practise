#include <iostream>

class PhoneNumber {
private:
    long long int number;
    
public:
    void input_and_check_num() {
        std::cin >> number;
        validate_and_display();
    }
    
    void validate_and_display() {
        int count = 0;
        long long int temp = number;
        
        // Count the number of digits in the input
        while (temp > 0) {
            temp /= 10;
            count++;
        }
        
        if (count == 10) {
            std::cout << "Your entered number is: " << number << std::endl;
        } else {
            std::cout << "Entered Phone number is wrong." << std::endl;
        }
    }
};

int main() {
    PhoneNumber phoneNumber;
    phoneNumber.input_and_check_num();
    return 0;
}