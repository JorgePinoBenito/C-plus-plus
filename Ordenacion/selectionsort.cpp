#include <iostream>
#include <vector>
#include <array>

using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionsort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {
            if (array[i] < array[min_idx])
            {
                min_idx = i;
            }
        }
        swap(&array[min_idx], &array[step]);
    }
}

int main()
{
    int arr[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionsort(arr, size);
    cout << "Sorted array in ascending order:\n";
    printArray(arr, size);
}
