#include <iostream>
using namespace std;


int sumOfDigits(int x){
    if (x < 10){
        return x;
    }

    int smallAnswer = sumOfDigits(x/10);
    return x%10+smallAnswer;
}

int main(){

    cout << "The sum of digits of 4523 is: " <<sumOfDigits(4523) << endl;
return 0;
}
