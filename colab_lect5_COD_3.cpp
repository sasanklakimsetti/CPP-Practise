#include <iostream>
#include <iomanip> // Include the header for setprecision

class TemperatureConverter {
private:
    double celsius;

public:
    void setCelsius(double c) {
        celsius = c;
    }

    double getCelsius() {
        return celsius;
    }

    double getFahrenheit() {
        return (celsius * 9/5) + 32;
    }

    double getKelvin() {
        return celsius + 273.15;
    }
};

int main() {
    TemperatureConverter converter;
    double celsius;

    std::cin >> celsius;
    converter.setCelsius(celsius);

    // Set the precision for the output
    std::cout << std::fixed << std::setprecision(2);
    std::cout << converter.getFahrenheit() << std::endl;
    std::cout << converter.getKelvin() << std::endl;

    return 0;
}