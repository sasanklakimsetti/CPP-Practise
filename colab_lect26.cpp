#include <iostream>
#include <string>

class Marks {
public:
    int math;
    int physics;
    int chemistry;

    Marks(int math, int physics, int chemistry) : math(math), physics(physics), chemistry(chemistry) {}
};

class Student {
public:
    std::string id;
    std::string name;
    Marks marks;
    int sportsMarks;

    Student(const std::string& id, const std::string& name, const Marks& marks, int sportsMarks) : id(id), name(name), marks(marks), sportsMarks(sportsMarks) {}

    void calculateAndDisplayResults() {
        int totalMarks = marks.math + marks.physics + marks.chemistry;
        double averageMarks = static_cast<double>(totalMarks) / 3;
        double finalResult = averageMarks + sportsMarks;

        std::cout << "Total=" << totalMarks << std::endl;
        std::cout << "Average=" << averageMarks << std::endl;
        std::cout << "Average+Sports marks = " << finalResult << std::endl;
    }
};

int main() {
    std::string id, name;
    int math, physics, chemistry, sportsMarks;

    // Read student information
    std::cin >> id >> name;
    std::cin >> math >> physics >> chemistry;
    std::cin >> sportsMarks;

    Marks studentMarks(math, physics, chemistry);
    Student student(id, name, studentMarks, sportsMarks);

    // Display results for the single student
    student.calculateAndDisplayResults();

    return 0;
}