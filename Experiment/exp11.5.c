#include<stdio.h>

int find(int *,int *q,int);

int main()
{
    int a[3][3],n;
    printf("Enter the value of parameter\n");
    scanf("%d",&n);
    int *p,*q;
    p=a;
    q=a+(n*n);
    printf("Enter %d x %d mattrix\n",n,n);
    for(int i=0;i<(n*n);i++)
    {
        scanf("%d",(p+i));
    }
    if(find(p,q,n)==0)
    {
        printf("Enter arry is symentrical\n");
    }
    else 
    {
        printf("Enter arry is not symentrical\n");
    }
    return 0;
}

int find(int *a,int *b,int n)
{
    int l=(n*n)/2;
    int count=0;
    for(int i=0;i<l;i++)
    {
        if((*(a+i)) != (*(b-i)))
        {
            count = 1;
            break;
        }
    }
    return count;
}