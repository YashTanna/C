#include<stdio.h>

void sort(int []);

int main()
{
    int a[10];
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a);
    printf("Sorted arry is\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void sort(int a[])
{
    int temp=0;
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}