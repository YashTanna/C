#include<stdio.h>
#include<string.h>

void with_arry(char [],char []);
void without_arry(char []);

int main()
{
    char s1[10],s2[10];
    printf("Enter name\n");
    scanf("%s",s1);
    with_arry(s1,s2);
    without_arry(s1);
    return 0;
}

void with_arry(char a[],char b[])
{
    int l = strlen(a);
    int i=0;
    int temp=l;
    for(i=0;i<temp;i++,l--)
    {
        b[i]=a[l-1];
    }
    b[i]='\0';
    printf("\n\nRevers with using another string\n");
    printf("%s",b);
}

void without_arry(char a[])
{
    int l =strlen(a);
    int mid =l/2;
    char temp;
    for(int i=0;i<mid;i++)
    {
        temp = a[l-i-1];
        a[l-i-1]=a[i];
        a[i]=temp;

    }
    printf("\n\nRevers without using another string\n");
    printf("%s\n",a);
}