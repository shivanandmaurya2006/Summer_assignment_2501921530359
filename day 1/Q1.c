//write a program to calculate the sum of first natural number.
#include<stdio.h>
int sumNatural(int a){
    if (a==0)
    {
        return 0;
    }
    
    return a+sumNatural(a-1);
}
int main(int argc, char const *argv[])
{
    int n,sum;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    sum=sumNatural(n);
    printf("The sum of %d natural no. is : %d",n,sum);
    
    return 0;
}
