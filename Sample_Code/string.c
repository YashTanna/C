#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("How many name you want to enter\n");
    scanf("%d",&n);
    char *p;
    p=(char *)malloc(n*sizeof(char));
    printf("Enter name\n");
    scanf("%s",p);
    printf("%s",p);
    free(p);
    return 0;
}