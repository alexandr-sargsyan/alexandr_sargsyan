#include <iostream>

using namespace std;

int *Merge(int *arr1, int size1, int *arr2, int size2)
{
    int *arr = new int[size1 + size2];
    int x = 0;
    int y = 0;

    if (size1 == 1 || size2 == 1)
    {
        if (arr1[0] > arr2[0])
        {
            arr[0] = arr2[0];
            arr[1] = arr1[0];
        }
        else
        {
            arr[0] = arr1[0];
            arr[1] = arr2[0];
        }
        return arr;
    }

    for (int i = 0; i < (size1 + size2); i++)
    {
        if (x >= size1 && y < size2)
        {
            arr[i] = arr2[y];
            y++;
            continue;
        }
        if (y >= size2 && x < size1)
        {
            arr[i] = arr1[x];
            x++;
            continue;
        }

        if (arr1[x] <= arr2[y])
        {
            arr[i] = arr1[x];
            x++;
        }
        else if (arr1[x] > arr2[y])
        {
            arr[i] = arr2[y];
            y++;
        }
    }
    return arr;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,87};
    int arr2[] = { 11, 12, 13, 14, 15, 16, 17, 18, 19,22};

    int *a = Merge(arr1, 10, arr2, 10);

    for (int i = 0; i < 20; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    return 0;
}