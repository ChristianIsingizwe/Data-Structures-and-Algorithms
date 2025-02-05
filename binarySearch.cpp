#include <iostream>
using namespace std;

int binarySearch(int a[], int element, int left, int right);

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int index = binarySearch(arr, 11, 0, 13);
    cout << "The element we are looking for is at the index: " << index << endl;
    return 0;
}


int binarySearch (int arr[], int element, int left, int right)
{
    int mid = left + (right - left)/2;


    if (left > right) return -1;


    if (arr[mid] == element)
    {
        return mid;
    }

    else if (arr[mid] > element)
    {
        return binarySearch(arr, element, left, mid-1);
    }
    else
    {
        return binarySearch(arr, element, mid +1, right);
    }
}
