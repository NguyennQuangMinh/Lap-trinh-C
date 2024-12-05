#include <stdio.h>
#include <math.h>

// kiem tra 1 so  xem so do co so luong uoc la so le hay khong
int cp(long long n){
	if(1ll * sqrt(n) * sqrt(n) == n){
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
