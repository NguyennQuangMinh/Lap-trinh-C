#include <stdio.h>
#include <math.h>

// dem so chan, dem so le, tong so chan, tong so le trong mang nhap tu ban phim

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	int cntchan = 0;
	int cntle = 0;
	int tongchan = 0;
	int tongle = 0;
	
	for(int i = 0; i<n ;i++){
		if(a[i]%2 == 0){
			cntchan++;
			tongchan+=a[i];
		}else{
			cntle++;
			tongle+=a[i];
		}
	}
	printf("%d %d %d %d", cntchan, cntle, tongchan, tongle);
}
