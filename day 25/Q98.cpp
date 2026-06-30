// write a program to Find common characters in strings.
#include <iostream>

using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter the first String : ";
    getline(cin, str1);

    cout << "Enter the second string : ";
    getline(cin, str2);

    int len1 = str1.length();
    int len2 = str2.length();

    cout << "The dublicate charecter : ";
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                bool alreadyPrinted = false;

                for (int k = 0; k < i; k++)
                {
                    if (str1[k] == str1[i])
                    {
                        alreadyPrinted = true;
                        break;
                    }
                }

                if (!alreadyPrinted)
                {
                    cout << str1[i] << " ";
                    break;
                }
            }
        }
    }

    return 0;
}
