#include <stdio.h>
#include <math.h>

// dem so luong so chinh phuong trong day so lua chon

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int canduoi = ceil(sqrt(a));
	int cantren = sqrt(b);
	printf("%lld", 1ll*a*b);
	
}
