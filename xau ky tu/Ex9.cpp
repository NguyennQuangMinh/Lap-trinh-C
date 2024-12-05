#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//strtok: tach cac tu trong xau ki tu

int main(){
	char c[1000];
	gets(c);
	char *word = strtok(c, " ./-");
	while(word != NULL){
		printf("%s\n", word); //tu tach duoc
		word = strtok(NULL, " ./-");
	}
	return 0;
	
}
