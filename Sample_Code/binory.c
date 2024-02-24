#include<stdio.h>
int main()
{
    int a[10],b,c,d;
    printf("Enter number :\n");
    scanf("%d",&b);
    printf("Binory of %d is :\n",b);
    for(int i=9;i>=0;i--)
    {
        c=b/2;
        d=b%2;
        b=c;
        a[i]=d;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}