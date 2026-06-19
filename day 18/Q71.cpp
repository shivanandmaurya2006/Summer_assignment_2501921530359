// Write a program for binary search.
#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }  

    sort(arr,arr+n);

    int key;
    cout<<"Enter the element that you want to found : ";
    cin>>key;

    int mid,left = 0, right = n - 1,found=false;
    while (right>=left)
    { 
        mid=(left+right)/2;
        if (arr[mid]==key)
        {
            cout<<"The element found at index : "<<mid;
            found=true;
            break;
        }
        else if (arr[mid]<key)
        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
        
    }
    if (!found)
    {
        cout<<"The element doesn't found."<<endl;
    }
    
    return 0;
}