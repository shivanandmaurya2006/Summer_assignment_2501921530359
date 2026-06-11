//Write a program to print star pyramid.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   int num;
    cout<<"enter the length of pyramid : ";
    cin>>num;
    for (int i = 0; i < num; i++)
    {   
        for (int k = num; k>i; k--)
        {
            cout<<" ";
        }
        

        for (int j = 0; j <=2*i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
