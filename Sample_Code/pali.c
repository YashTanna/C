#include <stdio.h>

int check(int num);

int main()
{
    int num;
    printf("Enter number whether number is palindrome or not\n"); // 4554
    scanf("%d", &num);
    if (check(num) == 1)
    {
        printf("Enter number is palindrome\n");
    }
    else
    {
        printf("Enter number is not palindrome\n");
    }
    return 0;
}

int check(int num)
{
    int a,b,c,rev=0;
    a=num;
    while(a!=0)
    {
        b=a%10;
        c=a/10;
        a=c;
        rev = rev*10 + b;
    }
    // printf("%d\n",rev);
    if(rev==num)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}