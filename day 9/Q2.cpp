//write a program to print reverse number triangle.
#include<iostream>
using namespace std;
int num=1;
int main(int argc, char const *argv[])
{
    for (int i = 5; i >0; i--)
    { 
        for (int j = 0; j <i; j++)
        {
           cout<<"\t"<<num;
           num++;
        }
        cout<<endl;
        num=1;
    }
    
    return 0;
}
