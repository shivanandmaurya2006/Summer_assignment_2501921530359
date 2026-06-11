//Write program to print charecter pyramid.
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char ch='A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout<<" ";
        }
        for (int k = 0; k <=i; k++)
        {
           cout<<ch;
           ch++;
        }
        ch--;
       for (int m = i; m >0; m--)
       {
            ch--;
            cout<<ch;
       }
       
        cout<<endl;
    }
    
    return 0;
}
