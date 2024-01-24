#include <iostream>

class RetailShop {
private:
    static double totalSales;

public:
    static void addSale(double amount) {
        totalSales += amount;
    }

    static double getTotalSales() {
        return totalSales;
    }
};

double RetailShop::totalSales = 0;

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        double amount;
        std::cin >> amount;
        RetailShop::addSale(amount);
    }

    std::cout << "Total Sales: " << RetailShop::getTotalSales() << std::endl;

    return 0;
}