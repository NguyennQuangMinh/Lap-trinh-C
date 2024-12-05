#include<stdio.h>
#include<math.h>

// 1. phan tich thua so nguyen to
// 2. UCLN, BCNN
// 3. so thuan nghich
// 4. To hop chap k cua n
// 5. Tam giac pascal

int ucln(int a, int b){
	while( b!=0 ){
		int r = a%b;
		a = b;
		b= r;
	}
	return a;
}
// bcnn = a nhan b chia cho ucln cua a va b
int bcnn(int a, int b){
	return a*b / ucln(a,b);
}

int  main(){
	printf("%d %d", ucln(15, 8), bcnn(15, 8));
}
