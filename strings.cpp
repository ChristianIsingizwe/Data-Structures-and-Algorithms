#include <iostream>
using namespace std;


int main(){
    char word[50];
    int counter=0;

    cout << "Enter a word of at most 50 characters: ";
    cin >> word;

    while (word.length() !=0){
      counter =+1;
      word.length -=1;
    }

    cout << "The string has: "<< counter << "Characters" << endl;

    return 0;
}
