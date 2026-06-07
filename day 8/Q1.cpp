//write a program to print half pyramid.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
