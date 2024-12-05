#include<stdio.h>

void nhap(int *ptr)
{
	scanf("%d\n", ptr);
	printf("%x\n", ptr);
	printf("%d\n", *ptr);
}
int main()
{
	int a;
	nhap(&a);
//	printf("%d\n", a);
}
