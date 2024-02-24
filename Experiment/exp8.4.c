#include<stdio.h>
#include<string.h>
void add(char [],char[]);
int main()
{
    char str1[20],str2[20];
    printf("Enter first string\n");
    scanf("%s",str1);
    printf("Enter second string\n");
    scanf("%s",str2);
    add(str1,str2);
    printf("New string is\n%s",str1);
    return 0;
}

void add(char a[],char b[])
{
    int l1=strlen(a);
    int l2=strlen(b)-3;
    int i=0;
    for(int i=0;i<3;i++)
    {
        a[l1++]=b[l2++];
    }
    a[l1]='\0';
}