/*
Guna wants to write a program that counts the number of occurrences of a specific character in a given string.He decided to create a class called Occurrence to handle this task. In the class,a string and character are it's private attributes. Initialise the variables using a member function. Define a member function countOccurrence() to count the number of times the character occurs in a string.

Input Format: The first line of input consists of a string,str. The second line of input consists of a single character,ch which represents the character to be counted for its occurrence in the string.

Output format: The output displays a single integer representing the count of occurrences of the character ch in the given input string str.
*/
#include <iostream>
#include <string>

class Occurrence {
private:
    std::string str;
    char ch;

public:
    void initialize(std::string str, char ch) {
        this->str = str;
        this->ch = ch;
    }

    int countOccurrence() {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ch) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    std::string str;
    char ch;

    std::getline(std::cin, str);
    std::cin >> ch;

    Occurrence occurrence;
    occurrence.initialize(str, ch);

    int result = occurrence.countOccurrence();
    std::cout << result << std::endl;

    return 0;
}