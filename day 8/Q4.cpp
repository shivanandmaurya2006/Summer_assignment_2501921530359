//Write a program to prin repeated number pattern;
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int count=1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<"\t"<<count;
        }
        count++;
        cout<<endl;
    }
    
    return 0;
}
