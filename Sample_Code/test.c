#include<stdio.h>
#include<conio.h>

void swap(int * x,int * y);

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("a = %d and b = %d\n",a,b);
    printf("After swaping\n");
    swap(&a,&b);
    printf("a = %d and b = %d\n",a,b);
    return 0;
}

void swap(int * x,int * y)
{
    int temp;
    temp=*x;
    *x = *y;
    *y =temp;
}