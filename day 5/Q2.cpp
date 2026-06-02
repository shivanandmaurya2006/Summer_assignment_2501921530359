// Write a program to check strong number.
#include <iostream>
using namespace std;
int fact(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;
    }

    return a * fact(a - 1);
}
int main(int argc, char const *argv[])
{
    int num, temp, rem, sum = 0;
    cout << "Enter the number : ";
    cin >> num;
    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        sum += fact(rem);
        temp = temp / 10;
    }
    if (num == sum)
    {
        cout << "The number is a strong number";
    }
    else
        cout << "The number is not a Strong number";

    return 0;
}
