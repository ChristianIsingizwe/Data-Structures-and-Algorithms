#include <iostream>
using namespace std;


int fact(int n){
    /*if (n == 0) || (n==1){
        return 1;
    } */

    int smallAnswer = fact(n=1);
    return n*smallAnswer;
}

int main(){

    cout << "The factorial of 10 is: "<<fact(10) << endl;
return 0;
}
