#include <stdio.h>
#include <string.h>

int main ()
{
	int n;
	do{
		scanf("%d", &n);
		if( n<0 ) printf("so nhap khong hop le, moi nhap lai: ");
	}while(n<0);
   	
}
