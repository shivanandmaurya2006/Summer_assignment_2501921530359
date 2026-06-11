//Write a program to print repeated charecter pattern.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char ch='A';
    for (int i = 0; i <5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<ch;
            
        }
        cout<<endl;
        ch++;
    }
    
    return 0;
}
