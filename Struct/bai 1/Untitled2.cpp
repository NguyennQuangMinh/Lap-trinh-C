#include <stdio.h>

struct PhanSo{
	int tuso;
	int mauso;
};

void inputPS(struct PhanSo *ptr){
	printf("nhap tu so: ");
	scanf("%d", &ptr->tuso);
	printf("\nnhap mau so: ");
	do{
		scanf("%d", &ptr->mauso);
	}while(ptr->mauso==0);
}

void printPS(struct PhanSo ptr){
	if(ptr.mauso < 0){
		ptr.tuso *= -1;
		ptr.mauso *= -1;
	}
	printf("%d/%d", ptr.tuso, ptr.mauso);
}

int main(){
	struct PhanSo ps1, ps2;
	inputPS(&ps1);
	printf("\n---\n");
	printPS(ps1);
}
