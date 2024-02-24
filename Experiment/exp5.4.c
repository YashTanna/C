#include<stdio.h>
int main()
{
    int a[10];
    int temp;
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int max,posm=0,min,posmin=0;
    max = a[0];
    min=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            posm=i;
        }
        if(a[i]<min)
        {
            min=a[i];
            posmin=i;
        }
    }
    printf("Maximum number is %d",max);
    printf("\n minimum number is %d\n",min);
    
    temp=a[posm];
    a[posm]=a[posmin];
    a[posmin]=temp;
    printf("New arry is\n");
    for(int i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}