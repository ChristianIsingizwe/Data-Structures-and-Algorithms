#include <iostream>
using namespace std;

template<typename T>
T addition(T a, T b){
    return a+b;
}

int main(){
    cout << "Addition of the 2 numbers: " <<addition<string>("isingizwe", "Christian") << endl;
}
