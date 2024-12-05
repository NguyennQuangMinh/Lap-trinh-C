#include <stdio.h>
#include <math.h>

// phan tich thua so nguyento
int phantich(long long n){
	for(int i = 2; i<=sqrt(n); i++){
		if(n%i == 0){
			int mu = 0;
			while(n%i == 0){
				++mu;
				n/=i;
			}
			printf("%d^%d", i, mu);
			if(n!=1){
				printf(" * ");
			}
		}
	}
	if(n>1){
		printf("%lld^1", n);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	phantich(n);
}
