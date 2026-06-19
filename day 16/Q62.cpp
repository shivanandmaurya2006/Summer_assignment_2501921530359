#include <iostream>
#include<algorithm>

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

    sort(arr,arr+n);
    int maxFreqNO=arr[0],count=0,prevCount=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==arr[i+1])
        {
            count++;
        }
        else{
            count=0;
        }
        if (prevCount<count)
        {
            prevCount=count;
            maxFreqNO=arr[i];
        }
        
    }
    cout<<"The Max frequency is : "<<prevCount+1<<" And the number is : "<<maxFreqNO<<endl;

    return 0;
}