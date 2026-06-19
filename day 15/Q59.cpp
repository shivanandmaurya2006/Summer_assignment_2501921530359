// Write a program to rotate array right.
#include <iostream>

using namespace std;

int main()
{
    int n, count;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number that much time you want to shift : ";
    cin >> count;
    count = count % n;
    for (int i = 0; i < count; i++)
    {
        int temp = arr[n - 1];
        for (int j = n-1; j >0; j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}