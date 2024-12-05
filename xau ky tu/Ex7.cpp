#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//1. dem tan suat cua cac ki tu trong xau
//2. Tim ki tu xuast hien nhieu lan nhat, it lan nhat

int main()
{
	char c[10000];
	scanf("%s", c);
	int sum = 0;
	for(int i = 0; i<strlen(c); i++){
		sum += c[i] - '0';
	}
	printf("%d", sum);
}
