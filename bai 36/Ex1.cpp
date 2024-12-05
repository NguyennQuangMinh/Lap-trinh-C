#include<stdio.h>
#include<math.h>

// 1. phan tich thua so nguyen to
// 2. UCLN, BCNN
// 3. so thuan nghich
// 4. To hop chap k cua n
// 5. Tam giac pascal

void phantich(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			//n la thua so nguyen to
			while(n%i == 0){
				printf("%d ", i);
				n = n/i;
			}
		}
	}
	if(n!=1){
		printf("%d ", n);
	}
}

int main(void){
	int n;
	scanf("%d", &n);
	phantich(n);
}
