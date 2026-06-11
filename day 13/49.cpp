//write a program to input and display array.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int length;
    cout<<"Enter the length of array : ";
    cin>>length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cout<<"Enter the "<<i+1<<" element of array :";
        cin>>arr[i];
    }
    cout<<"The Element of array is : ";
    for (int i = 0; i < length; i++)
    {
        cout<<"\t"<<arr[i];
    }
    
    return 0;
}
