// Write a program to Intersection of arrays;
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter the size of the array 1: ";
    cin >> m;

    int arr1[m];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the size of the array 2: ";
    cin >> n;

    int arr2[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);

    int i = 0;
    while (i < m - 1)
    {
        if (arr1[i] == arr1[i + 1])
        {
            for (int j = i; j < m - 1; j++)
            {
                arr1[j] = arr1[j + 1];
            }
            m--;
        }
        else
        {
            i++;
        }
    }

    i = 0;
    while (i < n - 1)
    {
        if (arr2[i] == arr2[i + 1])
        {
            for (int j = i; j < n - 1; j++)
            {
                arr2[j] = arr2[j + 1];
            }
            n--;
        }
        else
        {
            i++;
        }
    }

    cout << "The intersection of arrays is : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout<<arr1[i]<<"\t";
            }
        }
    }

    return 0;
}