#include<stdio.h>

int expo(int ,int);

int main()
{
    int a,b;
    printf("Enter number\n");
    scanf("%d",&a);
    printf("Enter power of %d\n",a);
    scanf("%d",&b);
    printf("Answer of  %d rest to %d is %d",a,b,expo(a,b));
    return 0;
}

int expo(int a,int b)
{
    if(b==0)
    {
        return 1;
    }
    else 
    {
        return (a*expo(a,b-1));
    }
}