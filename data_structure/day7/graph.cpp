#include "graph.hpp"

#include <iostream>
using namespace std;

Graph::Graph(int _size)
{
    size = _size;
    arr = new bool *[size];
    inputMatrix(arr, size);
}

void Graph::inputMatrix(bool **arr, int size)
{
    cout << "input elements : \n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = new bool[size];
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void Graph::addNode()
{
    size++;
    bool **arr1 = new bool *[size];
    for (int i = 0; i < size; i++)
    {
        arr1[i] = new bool[size];
        for (int j = 0; j < size; j++)
        {
            if (j < size - 1 && i < size - 1)
            {
                arr1[i][j] = arr[i][j];
            }
            else
            {
                arr1[i][j] = 0;
            }
        }
    }

    bool **arr2;
    arr2 = arr;
    arr = arr1;
    delete[] arr2;
}

void Graph::removeNode()
{
    size--;
    bool **arr1 = new bool *[size];
    for (int i = 0; i < size; i++)
    {
        arr1[i] = new bool[size];
        for (int j = 0; j < size; j++)
        {
            arr1[i][j] = arr[i][j];
        }
    }
    bool **arr2;
    arr2 = arr;
    arr = arr1;
    delete[] arr2;
}

void Graph::print()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

void Graph::addEdge(int a, int b)
{
    if (a >= size || b >= size)
    {
        cout << "out of range \n";
        return;
    }
    arr[b][a] = 1;
    arr[a][b] = 1;
}

void Graph::removeEdge(int a, int b)
{
    if (a >= size || b >= size)
    {
        cout << "out of range \n";
        return;
    }
    arr[b][a] = 0;
    arr[a][b] = 0;
}

bool Graph ::isEdgeExists(int a, int b)
{
    if (arr[a][b])
    {
        return true;
    }

    return false;
}

bool Graph ::IsPathExists(int x, int y)
{
    bool arr1[size] = {false};
    int arr2[size];

    arr1[x] = true;
    arr2[0] = x;

    int a = 1;
    int minPath = 1; // es popoxakany nra hetiya ver hxumchini masivan tuschikya fori i arr[i][j]

    for (int k = 0; k < size; k++)
    {
        int i = arr2[k];

        if (minPath <= k)
        {
            if (arr1[y])
            {
                return true;
            }
            return false;
        }

        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] == 1 && arr1[j] == false)
            {
                arr2[a] = j;
                arr1[j] = true;
                a++;
                minPath++;
            }
        }
    }

    if (arr1[y])
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Graph ::nodeNeighouns(int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[x][i])
        {
            cout << i << ", ";
        }
    }
}

void Graph ::nodeConnections(int x)
{
    bool arr1[size] = {false};
    int arr2[size];

    arr1[x] = true;
    arr2[0] = x;

    int a = 1;
    int minPath = 1; // es popoxakany nra hetiya ver hxumchini masivan tuschikya fori i arr[i][j]

    for (int k = 0; k < size; k++)
    {
        int i = arr2[k];

        if (minPath <= k)
        {
            for (int i = 0; i < size; i++)
            {
                if (arr1[i])
                {
                    cout << i << ", ";
                }
            }
            return;
        }

        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] == 1 && arr1[j] == false)
            {
                arr2[a] = j;
                arr1[j] = true;
                a++;
                minPath++;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr1[i])
        {
            cout << i << ", ";
        }
    }
}
