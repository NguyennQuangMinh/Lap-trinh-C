#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// cap phat dong(dynamic allocation)
/* cu phap:
			data_type *a = (data_type*)malloc(so byte can cap phat);
*/
int main(){
	int n = 1000;
	int *a = (int *)malloc(n * sizeof(int));
	for(int i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<5; i++){
		printf("%d ", a[i]);
	}
	free(a);	//giai phong bo nho da xin cap phat dong
}
