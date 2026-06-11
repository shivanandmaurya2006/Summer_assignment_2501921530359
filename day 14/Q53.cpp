//write a program for linear search.
#include <iostream>

using namespace std;

int main() {
    int n,key;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"Enter the Key element thats you want to found :";
    cin>>key;
    cout<<"The key element is found at index:";
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            cout<<i<<",";
        }
        
    }
    
    return 0;
}