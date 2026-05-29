// write a program to find lcm of two number.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1, num2, a, b, lcm;
    cout << "Enter the number 1 : ";
    cin >> num1;
    cout << "Enter the number 2 : ";
    cin >> num2;
    a = num1;
    b = num2;
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    lcm = (a * b) / num1;
    cout<<"THe lcm of both number is = "<<lcm;

    return 0;
}
