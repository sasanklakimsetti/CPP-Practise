#include <iostream>
#include <string>

class Year {
public:
    enum Month {
        JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };
};

int main() {
    int n;
    std::cin >> n;

    if (n >= Year::JANUARY && n <= Year::DECEMBER) {
        const char* months[] = {"", "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
        std::cout << "Month: " << months[n] << std::endl;
    } else {
        std::cout << "Invalid month input" << std::endl;
    }

    return 0;
}