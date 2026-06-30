// write a program to check string rotation.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter the first string :";
    getline(cin, str1);
    cout << "Enter the second string :";
    getline(cin, str2);
    int len1 = str1.length();
    int len2 = str2.length();
    if (len1 != len2)
    {
        cout << "They are diffrent string. ";
    }
    else
    {

        for (int k = 0; k < len1; k++)
        {
            char temp = str1[0];
            for (int i = 0; i < len1 - 1; i++)
            {
                str1[i] = str1[i + 1];
            }
            str1[len1 - 1] = temp;
            if (str1 == str2)
            {
                cout << "The string is same at rotation value " << k + 1;
                return 0;
            }
        }
        cout << "They are diffrent string. ";
    }

    return 0;
}