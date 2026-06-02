// write a program to find largest prime factor.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num, fact, count = 0, pfact = 0;
    cout << "Enter the number :";
    cin >> num;
    if (num <= 1)
    {
        cout << "There is no prime factor ";
    }

    else
    {

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                for (int j = 2; j <= i; j++)
                {
                    if (i % j == 0)
                    {

                        count++;
                    }
                }
                if (count == 1)
                {
                    pfact = i;
                }
            }
            count = 0;
        }
        if (pfact ==0)
        {
            cout << "Largest prime factor is : " << num;
        }
        else
        {
            cout << "Largest prime factor is : " << pfact;
        }
    }

    return 0;
}
