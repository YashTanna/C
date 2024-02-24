#include<stdio.h>
int main()
{
    int a,count=0;
    printf("Enter number\n");
    scanf("%d",&a);
    for(int i=2;i<=(a/2);i++)
    {
        if(a%i==0)
        {
            count = 1;
            break;
        }
    }
    if(count==0)
    {
        printf("Enter number is prime\n");
    }
    else 
    {
        printf("Enter number is not prime\n");
    }
    return 0;
}