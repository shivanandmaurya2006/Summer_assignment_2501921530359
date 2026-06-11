//write a program to find dublicates in array.
#include <iostream>

using namespace std;

int main() {
    int n,count=0;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i; j++)
    {
        if (arr[i]==arr[j])
        {
            cout<<arr[i]<<" ";
            count++;
        }
        
    }
    
}

    if (count==0)
    {
        cout<<"There is no dublicate number.";
    }
    else
    {
        cout<<"is the dublicate number."<<endl;
    }
    

    return 0;
}
