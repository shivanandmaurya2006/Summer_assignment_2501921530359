//write a program to remove dublicates from array.
#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n,count=0;;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int i=0;

    while (i<n-1)
    {
        if (arr[i]==arr[i+1])
        {
            for (int j = i; j < n-1; j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
        }
        else{
            i++;
        }
    }
    cout<<"The final array after deleting dublicate element :";
    for (int i = 0; i < n-count; i++) {
        cout<<arr[i] << " ";
    }
    cout << endl;

    return 0;
}