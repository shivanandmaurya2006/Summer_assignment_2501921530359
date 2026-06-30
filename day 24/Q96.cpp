// write a program to remove duplicate charecter.
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            for (int j = i + 1; j < len; j++)
            {
                if (str[i] == str[j])
                {
                    for (int k = j; k < len - 1; k++)
                    {
                        str[k] = str[k + 1];
                    }
                    len--;
                    j--;
                }
            }
        }
    }
    str.resize(len);
    cout << str;

    return 0;
}