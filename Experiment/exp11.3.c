#include<stdio.h>
void add(int *,int *,int *);
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={1,2,3,4,5,6,7,8,9};
    int c[3][3];
    int *r=c;
    int *p,*q;
    p=a;
    q=b;
    add(p,q,r);
    for(int i=0;i<9;i++)
    {
        printf("%d ",*(r+i));
    }
    return 0;
}

void add(int *a,int *b,int *c)
{
    for(int i=0;i<9;i++)
    {
        *(c+i) = *(a+i) + *(b+i);
    }
}