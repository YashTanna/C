#include<stdio.h>
#include<string.h>

void parser(char * str);

int main()
{
    char str[]="<h1>    my name is yash tanna   </h1>";
    parser(str);

    printf("~~%s~~",str);
    return 0;
}

void parser(char * str)
{
    int in=0,pos=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='<')
        {
            in=1;
            continue;
        }
        else if(str[i]=='>')
        {
            in=0;
            continue;
        }
            if(in==0)
            {
                str[pos]=str[i];
                pos++;
            }
    }
    str[pos]='\0';
    //remove space from begining
    while (str[0]==' ')
    {
        for (int  i = 0; i < strlen(str); i++)
        {
            str[i]=str[i+1];
        }
        
    }
    //remove space from ending
    while (str[strlen(str)-1]==' ')
    {
        str[strlen(str)-1]='\0';
    }
    
    
}