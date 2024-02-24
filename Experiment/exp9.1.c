#include<stdio.h>

typedef struct result
{
    char id[10];
    char name[10];
    int sub1 : 7;
    int sub2 : 7;
    int sub3 : 7;
    int total : 9;
}result;

int main()
{
    result s[3];
    int max=0,pos=0;
    int sub11[3],sub22[3],sub33[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter id\n");
        scanf("%s",s[i].id);
        printf("Enter name \n");
        scanf("%s",s[i].name);
        printf("Enter marks of three subject\n");
        scanf("%d %d %d",&sub11[i],&sub22[i],&sub33[i]);
        s[i].sub1=sub11[i];
        s[i].sub2=sub22[i];
        s[i].sub3=sub33[i];
        s[i].total=sub11[i]+sub22[i]+sub33[i];
        if(s[i].total > max)
        {
            max = s[i].total;
            pos = i;
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("\n\n\n\n");
        printf("        ID : %s\n",s[i].id);
        printf("      Name : %s\n",s[i].name);
        printf(" Sub1 Mark : %d\n",s[i].sub1);
        printf(" Sub2 Mark:  %d\n",s[i].sub2);
        printf(" Sub3 Mark:  %d\n",s[i].sub3);
        printf("Total mark : %d\n",s[i].total);
        
    }
    printf("\n\nTop scorrer\n\n");
    printf("Name : %s\n",s[pos].name);
    printf("Total mark : %d\n",s[pos].total);
    printf("\n\n\n\nSerch student\n");
    char s1[10];
    printf("Enter id\n");
    scanf("%s",s1);
    for(int i=0;i<3;i++)
    {
        if(strcmp(s[i].id,s1)==0)
        {
            pos = i;           
        }
    }
    printf("Enter Three sub mark\n");
    scanf("%d %d %d",&sub11[pos],&sub22[pos],&sub33[pos]);
    s[pos].sub1=sub11[pos];
    s[pos].sub2=sub22[pos];
    s[pos].sub3=sub33[pos];
    s[pos].total=sub11[pos]+sub22[pos]+sub33[pos];
    printf("\n\n");
    printf("        ID : %s\n",s[pos].id);
        printf("      Name : %s\n",s[pos].name);
        printf(" Sub1 Mark : %d\n",s[pos].sub1);
        printf(" Sub2 Mark:  %d\n",s[pos].sub2);
        printf(" Sub3 Mark:  %d\n",s[pos].sub3);
        printf("Total mark : %d\n",s[pos].total);
       
    return 0;
}