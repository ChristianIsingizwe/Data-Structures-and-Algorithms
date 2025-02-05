#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int charWithSpaces = 0, charWithoutSpaces = 0, wordCount = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    charWithSpaces = str.length();

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            charWithoutSpaces++;
        }
    }

    bool inWord = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && !inWord) {
            wordCount++;
            inWord = true;
        } else if (str[i] == ' ') {
            inWord = false;
        }
    }

    cout << "Number of characters without spaces: " << charWithoutSpaces << endl;
    cout << "Number of characters with spaces: " << charWithSpaces << endl;
    cout << "Number of words: " << wordCount << endl;

    return 0;
}
