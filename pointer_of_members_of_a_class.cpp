#include <iostream>
using namespace std;

class MyClass {
public:
    int dataMember1;
    float dataMember2;
};

int main() {
    MyClass obj;
    obj.dataMember1 = 42;
    obj.dataMember2 = 3.14;

    // Creating pointers to data members
    int MyClass::* ptr1 = &MyClass::dataMember1;
    float MyClass::* ptr2 = &MyClass::dataMember2;

    // Using pointers to access data members
    cout << "Using pointer to data member 1: " << obj.*ptr1 << endl;
    cout << "Using pointer to data member 2: " << obj.*ptr2 << endl;

    return 0;
}
