#include<stdio.h>
#include<string.h>

void mustrcat(char [],char []);

void main()
{
    char str1[20],str2[20];
    printf("Enter first string\n");
    gets(str1);
    printf("Enter second string\n");
    gets(str2);
    mystrcat(str1,str2);
    printf("new string is\n%s",str1);
}

void mystrcat(char a[],char b[])
{
    int l1=strlen(a);
    int l2=strlen(b);
    int i=0;
    for(i=0;i<l2;i++)
    {
        a[l1++]=b[i];
    }
    a[l1]='\0';
}