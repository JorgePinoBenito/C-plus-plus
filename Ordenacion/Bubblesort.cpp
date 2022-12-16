#include <iostream>
#include <vector>
#include <array>

using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void bubblesort(int array[], int size)
{
    for (int step = 0; step < size; ++step)
    {
        for (int i = 0; i < size - step; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, size);
    cout << "Sorted array in ascending order:\n";
    printArray(arr, size);
}
