//write a program to find missing number in an array.
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the no of element in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort( arr,arr+n);
    int expectedElement=1,i=0;
    cout<<"The missing element is: ";
    while (i<n)
    {
        if (arr[i]==expectedElement)
       {
        expectedElement++;
        i++;
       }
       else if (arr[i]>expectedElement)
       {
          cout<<expectedElement<<"\t";
          expectedElement++;
       }
       else{
        expectedElement++;
        i++;
       }
    }
    cout<<endl;
    return 0;
}
// still working on it.........