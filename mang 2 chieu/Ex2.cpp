#include <stdio.h>
#include <math.h>
// dem so luong so nguyen to trong ma tran

int nt(int n){
	if(n<2){
		return 0;
	}
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	int dem = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(nt(a[i][j])){
				++dem;
				printf("%d ", a[i][j]);
			}
		}
	}
	printf("\n%d", dem);
}
