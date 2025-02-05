#include <iostream>
#include <utility>
#include <cstdlib>
#include <ctime>

using namespace std;

void quickSort(int arr[], int length);
void quickSortRecursion(int arr[], int low, int high);
int partitions(int arr[], int low, int high);

int main()
{
    int a[] = {11, 42, 53, 78, 24, 23 , 90, 93, 98,21, 25, 23};
    int length = 12;

    quickSort(a, length);
    for (int i=0; i< length; i++){
        cout << a[i] << " ";
    }

    cout << endl << endl;

    return 0;
}

void quickSort(int arr[], int length)
{
    srand(time(NULL));
    quickSortRecursion(arr, 0, length-1);
}

void quickSortRecursion(int arr[], int low, int high)
{

    if(low < high)
    {
        int pivotIndex = partitions(arr, low, high);
        quickSortRecursion(arr, low, pivotIndex-1);
        quickSortRecursion(arr, pivotIndex + 1, high);
    }


}

int partitions(int arr[], int low, int high)
{
    int pivot_index = low + (rand() % (high-low+1));

    if (pivot_index != high)
    {
        swap(arr[pivot_index], arr[high]);
    }


    int pivot_value = arr[high];
    int i=low;

    for(int j=low; j< high; j++)
    {
        if(arr[j] >= pivot_value)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[high]);

    return i;
}
