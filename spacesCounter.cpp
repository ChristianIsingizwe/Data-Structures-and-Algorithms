#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int spacesCounter(string word){
    int spaces;

    for (int i=0; i<word.length; i++){
        if (isspace(word[i])){
            spaces + 1;
        }
    }
    return spaces;
}

int main(){

    string word;
    cout <<"Enter your word: "<< endl;
    getline(cin, word);

    cout << "The number of spaces in the entered word is: " << word << endl;

    return 0;
}


