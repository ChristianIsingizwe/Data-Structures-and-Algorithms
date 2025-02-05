#include <iostream>
#include <string>
using namespace std;

 /*int main(){

    string fullnames;

    cout << "Enter your full names: "<<endl;
    getline(cin, fullnames);
    cout << "Your full names are: "<<fullnames<< endl;

    return 0;
}
*/

int main(){

    int radius;
    const double PI = 3.14;
    cout <<"Enter the value of the radius: ";
    cin >> radius;

    int area = radius * radius * PI;
    cout << "The area of the circle is: " << area << endl;


    return 0;
}
