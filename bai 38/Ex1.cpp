#include<stdio.h>
#include<math.h>

// luy thua nhi phan
long long lt(int a, int b){
	long long res = 1;
	while(b!=0){
		if(b%2 == 1){
			// b la so le
			res *= a;
		}
		a *= a;
		b /=2;
	}
	return res;
}

int main(){
	printf("%lld", lt(2, 10));
}
