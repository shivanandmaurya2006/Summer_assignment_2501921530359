//write a program to find sum and average of array.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int length,sum=0;
    cout<<"Enter the length of array :";
    cin>>length;
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cout<<"Enter the "<<i+1<<" element of Array : ";
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"The sum of element of the array is : "<<sum<<endl;
    cout<<"The average of element of the array is : "<<(sum/length)<<endl;

    return 0;
}
