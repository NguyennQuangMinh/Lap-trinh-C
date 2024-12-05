#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	char c[1000];
	gets(c);
	char *word = strtok(c, " ./!?");
	while(word != NULL){
		printf("%s", word);
		word = strtok(NULL, " ./!?");
		if(word != NULL){
			printf(" ");
		}
	}
}
