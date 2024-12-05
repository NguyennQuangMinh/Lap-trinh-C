#include <stdio.h>
#include <string.h>
#include <time.h>

struct PERSON{
	char name[50];
	float salary;
};

void XoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

void inputPERSON(PERSON &ps){
	printf("\nnhap ten: ");
	fflush(stdin); fgets(ps.name, sizeof(ps.name), stdin); XoaXuongDong(ps.name);
	printf("\nluong: " );
	scanf("%f", &ps.salary);
}

//void printPERSON(PERSON ps){
//	printf("\n----\n");
//	printf("%s   %.2f", ps.name, ps.salary);
//}

void nhapsoluong(PERSON d[], int &n){
	do{
		printf("nhap so luong: ");
		scanf("%d", &n);
	}while(n<0);
	for(int i=0; i<n; i++){
		printf("\nmoi nhap nguoi thu %d: ", i+1);
		inputPERSON(d[i]);
	}
}

void xuatsoluong(PERSON d[], int n){
	for(int i = 0; i<n; i++){
//		printPERSON(d[i]);
		printf("\n----\n");
		printf("%s   %.2f", d[i].name, d[i].salary);
	}
}

int main(){
	PERSON ps[100];
	int n;
	nhapsoluong(ps, n);
	xuatsoluong(ps, n);
}
