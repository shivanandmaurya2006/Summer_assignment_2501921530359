// Write a program using function for pelindrome.
#include <iostream>
using namespace std;
int pelindrome(int a)
{
    int num = a, rem, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num = num / 10;
    }
    if (a == sum)
    {
        return 1;
    }

    else
        return 0;
}
int main(int argc, char const *argv[])
{
    int x;
    cout << "Enter the number : ";
    cin >> x;
    if (pelindrome(x))
    {
        cout << "It's a pelindrome number.";
    }
    else
    {
        cout << "It's not a pelindrone number.";
    }
    return 0;
}
