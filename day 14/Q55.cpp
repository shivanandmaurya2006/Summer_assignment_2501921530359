//write a program to find second largest element of array.
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max=arr[0],max2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max2=max;
            max=arr[i];
        }
        
    }
    
    cout<<"The second largest number is:"<<max2<<endl;
    return 0;
}