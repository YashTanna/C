#include<stdio.h>

int fib(int ,int ,int );

int main()
{
    int a,b,n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("Sum of n fibonaki element is %d\n",fib(a,b,n));

    return 0;
}

int fib(int a,int b;int n)
{
    if(n==0)
    {
        return 0;
    }
    else 
    {
        return (a+b+fib(a,b,n));
    }
}