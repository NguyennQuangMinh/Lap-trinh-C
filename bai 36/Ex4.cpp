#include<stdio.h>
#include<math.h>

// 1. phan tich thua so nguyen to
// 2. UCLN, BCNN
// 3. so thuan nghich
// 4. To hop chap k cua n
// 5. Tam giac pascal

//long long giaithua(int n){
//	int res = 1;
//	for(int i = 1; i<=n ; i++){
//		res *= i;
//	}
//	return res;
//}
//
//long long tohop(int n, int k){
//	return giaithua(n) / (giaithua(k)*giaithua(n-k));
//}

long long tohop2(int n, int k){
	k = fmin(n, n-k); 
	int res = 1;
	for(int i = 1; i<=k; i++){
		res *= n-i+1;
		res /= i;
	}
	return res;
}

int  main(){
	printf("%lld ", tohop2(10, 2));
}
