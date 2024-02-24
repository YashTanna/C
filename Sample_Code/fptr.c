#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    printf("Sum of 1 and 2 is %d\n",sum(1,2));
    int (*fptr)(int ,int);
    fptr=sum;
    int d;
    d=(*fptr)(6,4);
    printf("Value of d is %d\n",d);
    return 0;
}