// write a program to find first repeating charecter.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    int len = str.length(), count;
    for (int i = 0; i < len; i++)
    {
        count = 0;
        for (int j = 0; j < len; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > 1)
        {
            cout << "the first repeating charecter is: " << str[i];
            return 0;
        }
    }
        cout<<"the is no repeating charecter. ";
    return 0;
}