//write a program to find factorial of a number.
#include<stdio.h>
int fact(int a){
    if ((a==1)||(a==0))
    {
        return 1;
    }
    return a*fact(a-1);

}
int main(int argc, char const *argv[])
{   int n,factorial;
    printf("Enter the number : ");
    scanf("%d",&n);
    factorial=fact(n);
    printf("The factorial of a numer is : %d",factorial);
    
    return 0;
}
