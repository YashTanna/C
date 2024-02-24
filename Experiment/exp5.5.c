#include<stdio.h>
int main()
{
    int a[10];
    int n;
    int pos,value;
    printf("How many number you want to enter(<10)\n");
    scanf("%d",&n);
    printf("Enter %d number one by one\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position and value\n");
    scanf("%d %d",&pos,&value);
    pos = pos-1;
    for(int i=n+1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=value;
    printf("New arry is \n");
    for(int i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}