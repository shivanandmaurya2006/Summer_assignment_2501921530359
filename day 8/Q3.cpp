//write a program to print charecter triangle.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char ch='A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<"\t"<<ch;
            ch++;
        }
        cout<<endl;
        ch='A';
    }
    
    return 0;
}
