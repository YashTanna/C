#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    char pat[10];
    printf("Enter string\n");
    gets(str);
    printf("Enter pattern\n");
    gets(pat);
    int sl,pl;
    sl=strlen(str);
    pl=strlen(pat);
    int temp,count=0,pos[10],y=0,temp=1;
    for(int i=0;i<sl;i++)
    {
        temp=i;
        for(int j=0;j<pl;j++)
        {
            count =0;
            if(str[temp++]!=pat[j])
            {
                count=1;
                break;
            }
        }
        if(count ==0)
        {
            pos[y++]=i+1;
            temp=0;
        }
    }
    if(temp ==0)
    {
        printf("Match is found at pos \n");
        for(int z=0;z<y;z++)
        {
            printf("%d\t",pos[z]);
        }
    }
    else 
        printf("Match is not found\n");
    return 0;
}