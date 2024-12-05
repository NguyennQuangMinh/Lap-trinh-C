#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
	chong troi lenh
	sau ham nhap n thi su dung them ham getchar() de chong troi lenh nhap xau ky tu tu ban phim
	ban chat la truoc ham gets co ham scanf thi moi su dung getchar() vi scanf() khong xu ly ky tu enter tu ban phim 
*/

int main(){
	int n;
	printf("moi ban nhap n: ");
	scanf("%d", &n);
	while(getchar() != '\n'); //doc ky tu enter tu ban phim thi moi thoat khoi vong lap
	char c[1000];
	printf("moi ban nhap chuoi ky tu: ");
	gets(c);
	printf("chuoi ky tu vua nhap: %s", c);
	
}
