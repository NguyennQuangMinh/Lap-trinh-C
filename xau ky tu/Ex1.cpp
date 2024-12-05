#include <stdio.h>
#include <string.h>

int main(){
	char c[1000] = "28tech";
	printf("%s", c);
	char d[1000] = {'2', '8', 't', 'e', 'c', 'h', '\0'}; // ky tu \0 la ky tu NULL
	printf("%s", d);
}
