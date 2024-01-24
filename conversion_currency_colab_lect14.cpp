#include<iostream>

class Money {
    private:
        int rupee;
        int paisa;

    public:
        // Constructor to initialize the data members
        Money(int r, int p) {
            rupee = r;
            paisa = p;
        }

        // Function to print the total sum
        void printTotal() {
            std::cout << "Total Amount: " << rupee << " rupees and " << paisa << " paisa." << std::endl;
        }

        // Function to add two Money objects
        Money addMoney(Money m) {
            int totalRupee = rupee + m.rupee;
            int totalPaisa = paisa + m.paisa;

            if (totalPaisa >= 100) {
                totalRupee += totalPaisa / 100;
                totalPaisa %= 100;
            }

            return Money(totalRupee, totalPaisa);
        }
};

int main() {
    int rupee1, paisa1, rupee2, paisa2;

    // Input first amount
    std::cin >> rupee1 >> paisa1;
    // Input second amount
    std::cin >> rupee2 >> paisa2;

    // Create Money objects for the two amounts
    Money money1(rupee1, paisa1);
    Money money2(rupee2, paisa2);

    // Add the two amounts
    Money totalMoney = money1.addMoney(money2);

    // Print the total
    totalMoney.printTotal();

    return 0;
}
