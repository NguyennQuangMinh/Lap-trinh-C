#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[1000];
	scanf("%s", c);
	if(strlen(c) % 2 == 0){
		printf("Notfound");
	}
	else{
		printf("%c", c[strlen(c)/2]);
	}
}
