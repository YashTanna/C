#include<stdio.h>
int main()
{
	FILE * ptr = NULL;
	char str[100];
	ptr=fopen("file.txt","r");
	fscanf(ptr,"%s",str);
	printf("%s",str);
	fclose(ptr);
	return 0;
}