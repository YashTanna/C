#include<stdio.h>

typedef union person
{
    char name[100];
    struct 
    {
        int date;
        int month;
        int year;
    }age;
}info;


int main()
{
    info a[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter name\n");
        scanf("%s",a->name);
        printf("Enter date of birth\n");
        scanf("%d",&a->age.date);
        printf("Enter month if birth\n");
        scanf("%d",&a->age.month);
        printf("Enter year of birth\n");
        scanf("%d",&a->age.year);
        if(a[i].age.year<=2005 && a[i].age.year>1962)
        {
            printf("Age of adult is %d\n",2023 - a[i].age.year);
        }
        else if(a[i].age.year>=2005)
        {
            printf("Age of child is %d|%d|%d\n",a[i].age.date,a[i].age.month,a[i].age.year);
        }else if(a[i].age.year<=1962)
        {
            printf("Person is old\n");
        }
    }
    return 0;
}