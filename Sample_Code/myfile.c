#include<stdio.h>
int main()
{
    FILE * ptr=NULL;
    char str[10];
    ptr = fopen("file.txt","w");
    fgets(str,10,ptr);
    printf("%s",str);
    fclose(ptr);
    // printf("%s",str);
    return 0;
}