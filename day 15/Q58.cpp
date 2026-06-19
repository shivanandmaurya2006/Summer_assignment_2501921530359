// write a program to Rotate an array to left
#include <iostream>
using namespace std;

int main()
{
    int n, count;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the how many times you want to rotate left: ";
    cin >> count;
    count=count%n;
    for (int i = 0; i < count; i++)
    {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}