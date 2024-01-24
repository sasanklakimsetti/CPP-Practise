#include <iostream>
#include <string>
#include <iomanip> // For setprecision
using namespace std;

class Product {
public:
    string name;
    int numRatings;
    double* ratings;
    double averageRating;

    Product() {
        name = "";
        numRatings = 0;
        ratings = nullptr;
        averageRating = 0.0;
    }

    void inputRatings() {
        getline(cin, name); // Read the product name with spaces

        cin >> numRatings;
        ratings = new double[numRatings];

        double sum = 0.0;
        for (int i = 0; i < numRatings; ++i) {
            cin >> ratings[i];
            sum += ratings[i];
        }
        if (numRatings > 0) {
            averageRating = sum / numRatings;
        }
    }

    void displayAverageRating() {
        cout << "Product Name: " << name << endl;
        cout << fixed << setprecision(2) << "Average Rating: " << averageRating << endl;
    }
};

int main() {
    Product product;
    product.inputRatings();
    product.displayAverageRating();

    return 0;
}