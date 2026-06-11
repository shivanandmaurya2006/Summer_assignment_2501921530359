//rite a program to find frequency of a element.
#include <iostream>

using namespace std;

int main() {
    int n,key,count=0;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Enter the element that you want to find:";
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            count++;
        }
        
    }
    cout<<"The frequency of element is :"<<count<<endl;
    

    return 0;
}