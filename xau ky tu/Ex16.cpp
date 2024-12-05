#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char c[1000];
	gets(c);
	char *word = strtok(c, " ");
	char a[100][100];
	int n;
	while(word != NULL){
		strcpy(a[n], word);
		n++;
		word = strtok(NULL, " ");
	}
	for(int i = 0; i < n; i++){
		if(i%2 == 0){
			printf("%s", a[i]);
		}else {
			strrev(a[i]);
			printf("%s", a[i]);
		}
		if( i < n-1 ){
			printf(" ");
		}
	}
}
