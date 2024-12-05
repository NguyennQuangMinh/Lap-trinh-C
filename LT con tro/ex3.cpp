#include<stdio.h>

void change(int *ptr){
	printf("dia chi cua ptr la: %x\n", ptr);
	*ptr += 3 ;
}

int main()
{
	int a = 9;
	printf("gia tri cua a la: %d\n", a);
	printf("dia chi cua a la : %x\n", &a);
	change(&a);
	printf("gia tri cua a la: %d", a);
	
}
