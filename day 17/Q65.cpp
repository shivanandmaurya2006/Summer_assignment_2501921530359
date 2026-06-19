#include <iostream>

using namespace std;

int main() {
    int m,n;
    cout << "Enter the size of the first array: ";
    cin >> m;

    int arr1[m];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the size of the second array: ";
    cin >> n;

    int arr2[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    int arrMerge[m+n];
    for (int i = 0; i < m+n; i++)
    {
        if (i>=m)
        {
            arrMerge[i]=arr2[i-m];
        }
        else{
            arrMerge[i]=arr1[i];
        }
    }
    cout<<"The size of merged Array: ";
    for (int i = 0; i < m+n; i++) {
        cout << arrMerge[i] << " ";
    }
    cout << endl;

    return 0;
}