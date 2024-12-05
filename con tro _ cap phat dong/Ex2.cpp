#include <stdio.h>
#include <math.h>

int main(){
	int a[5] = {1, 2, 3, 4, 5};
	int *ptr;
	ptr = a; // luu gia tri vao con tro ptr dang tro toi
	++ptr; // di chuyen con tro ptr 1 lan
	printf("%d", *ptr); // tra ve gia tri ma con tro ptr dang tro toi
}
