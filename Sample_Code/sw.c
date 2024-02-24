#include<stdio.h>
int main()
{
    int a;
    printf("Enter number\n");
    scanf("%d",&a);
    int mod=0,rev=0,temp=a;
    for(int i=0;a!=0;i++)
    {
        mod=temp%10;
        temp=temp/10;
        rev=(rev*10)+mod;
    }
    if(rev==a)
        printf("Enter number is palindrome\n");
    else 
        printf("Enter number is not palindrome\n");
    return 0;
}