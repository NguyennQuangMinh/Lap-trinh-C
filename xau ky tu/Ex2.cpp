#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
nhap 1 xau ky tu co dau cach thi su dung ham gets() hoac fgets() vi ham scanf khong ho tro nhap xau ky tu co dau cach
*/

int main(){
	char c[1000];
	gets(c);
	printf("%s", c);
}
