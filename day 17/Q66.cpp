// write a program to union of arr.
#include <iostream>
#include<algorithm>

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
    
    int arrMerge[m+n];
    for (int i = 0; i < m + n; i++)
    {
        if (i >= m)
        {   
            arrMerge[i]=arr2[i-m];

        }
        else{
            arrMerge[i]=arr1[i];
        }
    }

    sort(arrMerge,arrMerge+(m+n));
    int i=0,l=m+n;
    while (i<(l-1))
    {
        if (arrMerge[i]==arrMerge[i+1])
        {
            for (int j = i; j < l-1; j++)
            {
                arrMerge[j]=arrMerge[j+1];
            }
            
            l--;
        }
        else{
            i++;
        }
    }
    cout<<"The union of array is : ";
    for (int i = 0; i < l; i++) {
        cout << arrMerge[i] << " ";
    }
    cout << endl;

    return 0;
}