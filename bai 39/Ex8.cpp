#include <stdio.h>
#include <math.h>

// in ra cac so chinh phuong trong khoang lua chon
// ceil(): ham lam tron len

int main(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	for( int i= ceil(sqrt(a)); i<=sqrt(b); i++){
		printf("%lld ", 1ll * i * i);
	}
	
}
