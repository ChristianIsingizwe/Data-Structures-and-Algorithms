#include <iostream>
using namespace std;


int linearSearch(int arr[], int length, int searchValue)
{
    for (int i=0; i< length; i++)
    {
       if(searchValue == arr[i])
       {
           return i;
       }
    }
    return -1;
}

int main(){

    int arr[] = {1,8,2,0,5,6,98,34};
    int userInput;

    cout <<"Enter an integer: "<<endl;
    cin >> userInput;

    return 0;
}
