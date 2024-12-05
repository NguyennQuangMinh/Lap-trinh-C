#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char c[1000];
	gets(c);
	char *word = strtok(c, "/");
	while(word != NULL){
		if(strlen(word) == 1){
			printf("0%s", word);
		}
		else{
			printf("%s", word);
		}
		if(strlen(word) != 4){
			printf("/");
		}
		word = strtok(NULL, "/");
	}
	
}
