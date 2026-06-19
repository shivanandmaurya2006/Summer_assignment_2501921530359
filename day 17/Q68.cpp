//write a program to find common element.
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

    cout << "The common element of arrays is : ";
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