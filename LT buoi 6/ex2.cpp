#include<stdio.h>
#include<math.h>

//Kiem tra 1 so co chua chu so 6 hay khong va tong cac chu so co chia het cho 8 hay khong

//kiem tra 1 so co chua chu so 6 hay khong
int check1(int n){
	while(n){
		if( n % 10 == 6) return 1;
		n /= 10;
	}
	return 0;
}
//kiem tra tong cac so trong so do co chia het cho 8 hay khong
int check2(int n){
	int sum = 0;
	while(n){
		sum += n%10;
		n /= 10;
	}
	return sum % 8 == 0;
}

int main(){
	for(int i=0; i<1000; i++){
		if(check1(i) == 1 && check2(i)==1){
			printf("%d ", i);
		}
	}
	
}
