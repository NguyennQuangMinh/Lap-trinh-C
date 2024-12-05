#include <stdio.h>
#include <math.h>

int main(){
	int x;
	scanf("%d", &x);
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int demsonhohon = 0;
	int demsolonhon = 0;
	for(int i=0; i<n; i++){
		if(a[i] > x){
			demsolonhon++;
		}else{
			demsonhohon++;
		}
	}
	printf("%d %d", demsolonhon, demsonhohon);
}
