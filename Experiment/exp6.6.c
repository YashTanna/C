#include<stdio.h>
#include<string.h>

int main()
{
    char temp[10];
    int i=0,j=1;
    char str[20][5];
    printf("Enter 5 names\n");
    for(int i=0;i<5;i++)
    {
        scanf("%s",&str[i]);
    }
    for(;i<4,j<=4;i++,j++)
    {
        if(strcmp(str[i],str[j])>1)
        {
           strcpy(temp,str[i]);
           strcpy(str[i],str[j]);
           strcpy(str[j],temp);
        }
        printf("Sorted string is\n");
        for(int i=0;i<5;i++)
        {
            printf("%s\n",&str[i]);
        }
    }

    return 0;
}