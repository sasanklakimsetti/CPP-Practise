#include <iostream>
#include <fstream>

int main() {
    int n;
    std::cin >> n;

    if (n > 100) {
        std::cout << "Exceeding limit!" << std::endl;
        return 0;
    } else {
        std::ifstream inputFile("numbers.txt");
        if (!inputFile.is_open()) {
            std::cerr << "Error opening the file for reading." << std::endl;
            return 1;
        }

        int num;
        int evenCount = 0;
        int oddCount = 0;

        for (int i = 0; i < n; ++i) {
            inputFile >> num;
            if (inputFile.eof()) {
                break;
            }
            if (num % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        inputFile.close();

        std::cout << "Even: " << evenCount << std::endl << "Odd: " << oddCount << std::endl;
    }

    return 0;
}
