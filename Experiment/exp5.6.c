#include<stdio.h>
int main()
{
    int a[10];
    int n;
    printf("How many nummber you want to enter \n");
    scanf("%d",&n);
    printf("Enter %d number onr by one\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos;
    printf("Enter the position of element,which you want to delet\n");
    scanf("%d",&pos);
    pos = pos-1;
    for(int i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("New arry is\n");
    for(int i=0;i<n-1;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}