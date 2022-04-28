#include <stdlib.h>
#include <ctime>
#include <iostream>

using namespace std;

void print(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
}

void bubble_sort(int arr[], int size)
{

    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertion_sort(int arr[], int size)
{
    int temp;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            temp = arr[i];
            int j;
            for (j = i; j > 0 && (temp < arr[j - 1]); j--)
            {
                arr[j] = arr[j - 1];
            }
            arr[j] = temp;
        }
    }
}

int main()
{
    srand(time(0));

    int size = 20000;
    int arr[size], arr1[size], arr3[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % size;
        arr1[i] = arr[i];
        // cout << arr[i] << ", ";
    }
    cout << endl;

    cout << endl;

    time_t start1 = clock();
    bubble_sort(arr, size);
    time_t end1 = clock();

    time_t start2 = clock();
    insertion_sort(arr1, size);
    time_t end2 = clock();

    cout << "bubble sort = " << (end1 - start1) / 1000 << endl;
    cout << "insertion sort = " << (end2 - start2) / 1000 << endl;
    return 0;
}
