#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void chen(char c[], int vitri, int kytu){
	for(int i=strlen(c); i>vitri; i--){
		c[i] = c[i-1];
	}
	c[vitri] = kytu;
	c[strlen(c) + 1] = '\0'; //can thiet
}

int main(){
	char c[1000];
	scanf("%s", c);
	if(c[1] == '/'){
		chen(c, 0, '0');
	}
	if(c[4] == '/'){
		chen(c, 3, '0');
	}
	printf("%s", c);
}
