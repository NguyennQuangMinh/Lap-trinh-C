#include<stdio.h>
#include<math.h>

// 1. phan tich thua so nguyen to
// 2. UCLN, BCNN
// 3. so thuan nghich
// 4. To hop chap k cua n
// 5. Tam giac pascal

int thuannghich(int n){
	int lat = 0;
	int temp = n; //lua lai gia tri n ban dau
	while(n!=0){
		lat = lat * 10 + n%10;
		n/=10;
	}
	if(temp == lat)
		return 1;
	else
		return 0;
}

int  main(){
	printf("%d", thuannghich(1234321));
}
