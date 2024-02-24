#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    int n;
    printf("How many mark yopu want to enter\n");
    scanf("%d",&n);
    int *p;
    p=(int *)calloc(n,sizeof(int));
    // p=NULL;
    if(p==NULL)
    {
        printf("Memory cannot be allopcated\n");
        exit(1);
    }
    printf("Enter n numbers\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("\n\n\n\n\n\n");
    int sum=0;
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*(p+i));
        sum += *(p+i);
    }
    printf("Total marks is : %d",sum);
    free(p);
    // clrscr();
    return 0;
}