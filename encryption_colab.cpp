#include <iostream>
#include <string>
using namespace std;

string encryptString(string str, int n) {
    string encryptedStr = "";
    int len = str.length();
    
    for (int i = 0; i < len; i++) {
        char c = str[i];
        
        if (isalpha(c)) {
            char base = (isupper(c)) ? 'A' : 'a';
            char encryptedChar = ((c - base + n) % 26) + base;
            encryptedStr += encryptedChar;
        } else {
            // For numbers and special characters, simply shift them without modification
            encryptedStr += (char)((c + n));
        }
    }
    
    return encryptedStr;
}

int main() {
    string str;
    int n;

    // Input
    cin >> str;
    cin >> n;

    // Call the encryption function
    string encrypted = encryptString(str, n);

    // Output the encrypted string
    cout << encrypted << endl;

    return 0;
}
