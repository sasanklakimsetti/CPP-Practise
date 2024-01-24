#include <iostream>

int countWords(const char** input) {
    int wordCount = 0;
    bool inWord = false;

    while (**input != '\0') {
        if (std::isspace(**input)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordCount++;
        }
        (*input)++;
    }

    return wordCount;
}

int main() {
    char userInput[1000];
    std::cin.getline(userInput, sizeof(userInput));

    const char* inputPtr = userInput;
    int wordCount = countWords(&inputPtr);

    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}