// Write a program to count even and odd elements.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int length, even = 0, odd = 0;
    cout << "Enter the length of Array : ";
    cin >> length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cout << "Enter the " << i + 1 << " element of Array :";
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "The total even element in the array is : " << even << endl;
    cout << "The total odd element in the array is : " << odd;

    return 0;
}
