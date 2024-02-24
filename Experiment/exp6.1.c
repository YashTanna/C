#include<stdio.h>

int mystrcmp(char [],char []);

int main()
{
    char s1[10],s2[10];
    printf("Enter first string\n");
    scanf("%s",s1);
    printf("Enter second string\n");
    scanf("%s",s2);
    if(mystrcmp(s1,s2)==0)
    {
        printf("Given string are same\n");
    }
    else 
    {
        printf("Given string are not same\n");
    }
    return 0;
}

int mystrcmp(char a[],char b[])
{
    int count=0;
    int i=0;
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            count =1;
        }
    }
    if(a[i]!='\0'||b[i]!='\0')
    {
        count =1;
    }
    return count;
}