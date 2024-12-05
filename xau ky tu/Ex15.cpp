#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int check(char c[], char d[]){
	if(strlen(c) != strlen(d)){
		return 0;
	}
	for(int i = 0; i<strlen(c); i++){
		if(tolower(c[i]) != tolower(d[i])){
			return 0;
		}
	}
	return 1;
}

int main(){
	char c[1000];
	gets(c);
	char *word = strtok(c, " ");
	int cnt = 0;
	while(word != NULL){
		if(check(word, "28tech")){
			cnt++;
		}
		word = strtok(NULL, " ");
	}
	printf("%d", cnt);
}
