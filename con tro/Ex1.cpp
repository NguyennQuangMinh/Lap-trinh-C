#include <stdio.h>
#include <math.h>
// int *ptr; => quan ly dia chi
// ptr = &a;
// *ptr = ... tuong duong **ptr va tuong duong voi a => lay gia tri cua dia chi ma con tro ptr dang tro den
int main(){
	int a = 100;
	int *ptr;
	ptr = &a;
	printf("Dia chi cua bien a la: %d\n", &a);
	printf("con tro ptr chua dia chi cua bien a: %d", ptr);
	*ptr = 500;
	printf("\nGia tri cua bien a la: %d", a);
}
