#include<stdio.h>
#include<math.h>

void nhap(int a[], int n){
	printf("nhap cac phan tu cua mang:\n ");
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
}

void in(int a[], int n){
	for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}

int sum(int a[], int n){
	int res = 0;
	for(int i=0; i<n; i++){
		res += a[i];
	}
	return res;
}

int main(){
	int n, a[n];
	scanf("%d", &n);
	nhap(a,n);
	in(a,n);
	sum(a, n);
	printf("\nTong cac phan tu trong mang la: %d", sum(a,n));
}



