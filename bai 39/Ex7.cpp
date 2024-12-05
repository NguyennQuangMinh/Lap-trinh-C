#include <stdio.h>
#include <math.h>

// kiem tra 1 so xem so do co phai la so chinh phuong hay khong

int cp(long long  n){
	int k = sqrt(n);
	if( 1ll * k * k ==n){
		return 1;
	}else return 0;
}

int main(){
	long long n;
	scanf("%lld", &n);
	if(cp(n)){
		printf("Yes");
	}else printf("No");

	
}
