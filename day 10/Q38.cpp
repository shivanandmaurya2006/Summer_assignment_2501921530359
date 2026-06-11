//write a program to print reverse number.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the height of the pyramid : ";
    cin>>num;
    for (int i = 0; i <num; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout<<" ";
        }
        for (int j = 2*num; j >2*i+1; j--)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}
