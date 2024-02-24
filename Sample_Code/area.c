#include<stdio.h>
#include<math.h>

float edistance(int ,int ,int ,int );

float areaofcircule(int ,int ,int ,int ,float (*ptr)(int ,int,int,int));

int main()
{
    int x1,x2,y1,y2;
    printf("Enter (x1,y1) \n");
    scanf("%d %d",&x1,&y1;
    printf("Enter (x2,y2)\n");
    scanf("%d %d",&x2,&y2);//mu name is yash
    printf("Euclidean distance is %f\n",edistance(x1,y1,x2,y2));
    float (*ptr)(int ,int,int,int);
    ptr=edistance;
    printf("Area of circule is %f",areaofcircule(x1,y1,x2,y2,ptr));
    return 0


float edistance(int x1,int y1,int x2,int y2)
{
    float a,b;
    a=pow((x2-x1),2);
    b=pow((y2-y1),2);
    float ans;
    ans=sqrt((a+b));
    return ans;
}

float areaofcircule(int x1,int y1,int x2,int y2,float (*ptr)(int ,int,int,int))
{
    float r;
    r=(*ptr)(x1,y1,x2,y2);
    float ans = 3.14;
    ans *= pow(r,2);
    return ans;
}