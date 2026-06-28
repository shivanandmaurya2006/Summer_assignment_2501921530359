// Write a program to remove spaces from string.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    int len = 0;
    cout << "Enter the String : ";
    getline(cin, str);
    len = str.length();

    int i = 0;
    while (i < len)
    {
        if (str[i] == ' ')
        {
            for (int j = i; j < len-1; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
            continue;
        }
        i++;
    }
    str.resize(len);

    cout << str << endl;
    return 0;
}