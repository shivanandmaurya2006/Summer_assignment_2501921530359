//write a program to find largest and smallest element.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int length;
    cout<<"Enter the length of array :";
    cin>>length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cout<<"Enter the "<<i+1<<" element of array :";
        cin>>arr[i];

    }
    int low=arr[0],high=arr[0];
    for (int i = 0; i < length; i++)
    {
        if (low>arr[i])
        {
            low=arr[i];
    
        }
        if (high<arr[i])
        {
            high=arr[i];
        }
        
    }
    cout<<"The smallest element of the array is: "<<low<<" And the largest element is: "<<high<<endl;
    
    return 0;
}
