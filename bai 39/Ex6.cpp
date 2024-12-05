#include <stdio.h>
#include <math.h>

// tong uoc cua 1 so nguyen duong
long long nt(long long n){
	int sum = 0;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i == 0){
			sum += i;
			if( i!= n/i){
				sum += n/i;
			}
		}
	}
	return sum;
}

int main(){
	long long n;
	scanf("%lld", &n);
	printf("%lld", nt(n));
}
