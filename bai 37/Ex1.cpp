#include<stdio.h>
#include<math.h>

// 1. kiem tra xem so do co phai la so thuoc day so Fibonacci hay khong
// 2. Liet ke n chu so dau tien cua day so fibonacci
// 3. In ra so fibonacci thu n

// kiem tra xem co phai la so fibonacci
int checkfibo(long long n){
	long long fn1 = 1, fn2 = 0;
	for(int i = 2; i <= 92; i++){
		long long fn = fn1 + fn2;
		if(fn == n){
			return 1;
		}
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}

// in ra n so fibonacci dau tien
void inFibo(long long n){
	if( n==1 ) printf("0");
	else if( n==2) printf("0 1 ");
	else{
		printf("0 1 " );
		long long fn1 = 1, fn2 = 0;
		for(int i = 2; i<=n; i++){
			long long fn = fn1 + fn2;
			printf("%lld ", fn);
			fn2 = fn1;
			fn1 = fn;
		}
	}
}

// in ra so Fibo thu n
long long findFibo(long long n){
	if(n==0 || n == 1){
		return n;
	}
	long long  fn2 = 0, fn1 = 1, fn;
	for(int i = 2; i<= n; i++){
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
	}
	return fn;
	
}

int main(){
	printf("%lld\n", checkfibo(21));
	inFibo(92);
	printf("\n%lld", findFibo(10));
}
