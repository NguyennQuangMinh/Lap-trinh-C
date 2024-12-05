#include<stdio.h>
#include<math.h>

// 1. phan tich thua so nguyen to
// 2. UCLN, BCNN
// 3. so thuan nghich
// 4. To hop chap k cua n
// 5. Tam giac pascal

long long tohop2(int n, int k){
	int res = 1;
	for(int i = 1; i<=k; i++){
		res *= n-i+1;
		res /= i;
	}
	return res;
}

int  main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i<n ; i++){
		for(int j = 0; j<=i; j++){
			printf("%lld ", tohop2(i , j));
		}
		printf("\n");
	}
}
