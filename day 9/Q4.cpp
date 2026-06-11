// write a program to print hollow square pattern;
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the pattern side's length : ";
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        if (i == 0 || i == num - 1)
        {
            for (int a = 0; a < num; a++)
            {
                cout << "*";
            }
        }
        else
        {

            cout << "*";
            for (int k = 0; k < num - 2; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}
