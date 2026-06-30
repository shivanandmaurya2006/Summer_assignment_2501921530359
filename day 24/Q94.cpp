// write a program to compress a string.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, strout;
    cout << "Enter the string: ";
    getline(cin, str);

    int len = str.length();

    if (len == 0)
    {
        cout << "Compressed string: " << strout;
        return 0;
    }

    int count = 1;

    for (int i = 0; i < len - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            strout += str[i];
            strout += to_string(count);
            count = 1;
        }
    }
    strout += str[len - 1];
    strout += to_string(count);

    cout << "Compressed string: " << strout;

    return 0;
}