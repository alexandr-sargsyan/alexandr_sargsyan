#include <iostream>

using namespace std;

int *Merge(int *arr1, int size1, int *arr2, int size2);

int *MergeSort(int arr[], int size)
{
  if (size == 1)
  {
    return arr;
  }
  else
  {
    int a, b;
    a = size / 2;
    b = size - a;

    int *arr1 = new int[a];
    int *arr2 = new int[b];

    for (int i = 0; i < a; i++)
    {
      arr1[i] = arr[i];
    }

    for (int i = 0; i < b; i++)
    {
      arr2[i] = arr[i + a];
    }
    return Merge(MergeSort(arr1, a), a, MergeSort(arr2, b), b);
  }
}

int *Merge(int *arr1, int size1, int *arr2, int size2)
{
  int *arr = new int[size1 + size2];
  int x = 0;
  int y = 0;

  if (size1 == 1 && size2 == 1)
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
  int arr[] = {777, 6, 1, 7, 78, 54, 32, 1, 6, 94, 5, 3, 17, 88,555};

  int *a = MergeSort(arr, 15);

  for (int i = 0; i < 15; i++)
  {
    cout << a[i] << ", ";
  }
  cout << endl;

  return 0;
}