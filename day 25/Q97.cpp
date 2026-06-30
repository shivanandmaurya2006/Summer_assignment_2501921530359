//Write a program to Merge two sorted arrays. 
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr1[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cout << "Enter the size of the array: ";
    cin >> m;

    int arr2[m];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    
    int arr3[m+n];
    for (int i = 0; i < m+n; i++)
    {
        if (i<n)
        {
            arr3[i]=arr1[i];
        }
        else{
            arr3[i]=arr2[i-n];
        }
        
    }
    sort(arr3,arr3+(m+n));
    for (int i = 0; i < m+n; i++)
    {
        cout<<arr3[i];
    }
    

    return 0;
}