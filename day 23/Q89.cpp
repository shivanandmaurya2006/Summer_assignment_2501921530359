// write a program to find first non-repeating charecter.
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter the string :";
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
        if (count==1)
        {
            cout<<"The first Non-Repeating charecter is: "<<str[i];
            return 0;
        }
        
    }

    cout << "There is no Non-Repeating charecter.";
    return 0;
}