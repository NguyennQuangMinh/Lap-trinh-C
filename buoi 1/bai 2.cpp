//Bài 2. Viet chuong trinh tim UCLN và BCNN cua 2 so a và b ( 1<= a, b <= 10000).
#include<stdio.h>

// cong thuc lien quan giua ucln va bcnn x*y = ucln(x, y) * bcnn(x, y)
int UCLN(int x, int y){
	if( x >= y){
		while( y!=0 ){
			int temp = y;
			y = x%y;
			x=temp;	
		}
	}
	else{
		while( x!=0 ){
			int temp1 = x;
			x = y%x;
			y = temp1;
		}
	}
}

int BCNN(int x, int y){
	return x / UCLN(x, y) * y;
}

int UCLN_of_nphantu(int arr[], int n){
	int result = arr[0];
	for(int i=1; i<n; i++){
		result = UCLN(result, arr[i]);
	}
	return result;
}

int BCNN_of_nphantu(int arr[], int n){
	int result =arr[0];
	for(int i=1; i<n; i++){
		result = BCNN(result, arr[i]);
	}
	return result;
}

int main(){
	int n;
	printf("moi ban nhap so luong phan tu n: ");
	scanf("%d", &n);
	if( n<0 ){
	printf("so luong phan tu phai lon hon 0\n");
	}
	int a[n];
	for(int i=0; i<n; i++){
		printf("Moi ban nhap so thu %d : ", i+1);
		scanf("%d", &a[i]);
	}
	int UCLN1 = UCLN_of_nphantu(a, n);
	int BCNN1 = BCNN_of_nphantu(a, n);
	printf("UCLN cua day so la: %d\n", UCLN1);
	printf("BCNN cua day so la: %d", BCNN1);

}
