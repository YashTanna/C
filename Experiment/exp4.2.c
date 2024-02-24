#include<stdio.h>
int main()
{
    int a;
    int fac=1;
    printf("Enter number\n");
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {
        fac = fac * i;
    }
    printf("%d! = %d",a,fac);
}