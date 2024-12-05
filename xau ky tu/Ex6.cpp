#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//1. dem tan suat cua cac ki tu trong xau
//2. Tim ki tu xuast hien nhieu lan nhat, it lan nhat

int main()
{
	char c[1000];
	scanf("%s", c);
	if(strlen(c) % 2 ==0){
		printf("not found");
	}
	else{
		printf("%c", c[strlen(c) / 2]);
	}
	return 0;
}
