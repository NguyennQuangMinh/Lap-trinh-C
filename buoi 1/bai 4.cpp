#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int t,n;
    printf("Moi ban nhap thang va nam : ");
    scanf("%d%d", &t,&n);
    if( n>=0 && t>0 && t<13 ){
		if( n % 400 == 0 || ( n % 4 == 0 && n % 100 != 0)){
			if( t==2 ){
				printf("29, %d", n);
			}
			else if( t == 7 || t == 8 || t % 2 != 0){
				printf("31, %d", n);
			}
			else{
				printf("30, %d", n);
			}
			
		}
    	else{
    		if( t==2 ){
				printf("28, %d", n);
			}
			else if( t == 7 || t == 8 || t % 2 != 0){
				printf("31, %d", n);
			}
			else{
				printf("30, %d", n);
			}
		}
	}

    else{
		printf("INVALID");
	}
}

