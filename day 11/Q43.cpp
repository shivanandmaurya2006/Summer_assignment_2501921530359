// write a program to check prime number through function.
#include <iostream>
using namespace std;
int IsPrime(int a)
{
    int count = 0;
    if (a <= 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    if (IsPrime(num))
    {
        cout << "It's a prime number .";
    }
    else
    {
        cout << "It's not a prime number .";
    }

    return 0;
}
