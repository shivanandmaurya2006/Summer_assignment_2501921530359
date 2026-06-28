// write program to calculate charecter frequency.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter the String : ";
    getline(cin, str);
    for (int i = 65; i <= 90; i++)
    {
        int count = 0;
        for (char c : str)
        {
            if (c == char(i) || c == char(i + 32))
            {
                count++;
            }
        }
        if (count > 0)
        {
            cout << "The charecter " << (char)i << " occurs " << count << " times." << endl;
        }
    }

    return 0;
}