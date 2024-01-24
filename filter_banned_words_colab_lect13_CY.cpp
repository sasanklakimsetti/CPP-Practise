#include <iostream>
#include <string>
using namespace std;

string filterTextWithReplacement(const string& text, const string& bannedWords) {
    string filteredText = text;
    size_t pos = 0;

    // Search for banned words and replace them with "-removed-"
    while ((pos = filteredText.find(bannedWords, pos)) != string::npos) {
        filteredText.replace(pos, bannedWords.length(), "-removed-");
        pos += 9;  // Move past the "-removed-" string to avoid infinite loops
    }

    return filteredText;
}

int main() {
    string text, bannedWords;

    // Input text and banned words
    cout << "Enter the text: ";
    getline(cin, text);

    cout << "Enter the banned words or phrases: ";
    getline(cin, bannedWords);

    // Filter the text and display the result
    string filteredText = filterTextWithReplacement(text, bannedWords);
    cout << "Filtered Text: " << filteredText << endl;

    return 0;
}
