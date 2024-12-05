#include <stdio.h>
#include <math.h>

int kiemtra(long long n){
	int cnt = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i == 0){
			int mu = 0;
			while(n%i == 0){
				++mu;
				n/=i;
			}
			if(mu>=2) return 0;
			++cnt;
		}
	}
	if(n>1){ //in ra thua so nguyen to cuoi cung
		++cnt;
	}
	if(cnt == 3){
		return 1;
	}else return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	if(kiemtra(n)){
		printf("1");
	}else printf("0");
}
