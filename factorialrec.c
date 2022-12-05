#include<stdio.h>
int factorial(int fact);
int main()
{
    int a;
    printf("Enter a number:-\n");
    scanf("%d",&a);
    printf("factorial of %d is %d\n",a,factorial(a));
    return 0;0
}
int factorial(int fact)
{
    if(fact==1)
    return (1);
    else
    return(fact*factorial(fact-1));
}