// Write a program to Sort words by length. 
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);

    string words[100];
    string word;
    int count = 0;

    while (ss >> word)
    {
        words[count++] = word;
    }

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (words[j].length() > words[j + 1].length())
            {
                swap(words[j], words[j + 1]);
            }
        }
    }

    cout << "\nWords sorted by length:\n";

    for (int i = 0; i < count; i++)
    {
        cout << words[i] << " ";
    }

    return 0;
}