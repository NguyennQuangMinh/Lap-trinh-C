#include <stdio.h>
#include <math.h>

struct phanso{
	int tuso;
	int mauso;
};

void NhapPhanSo(phanso *ps){
	printf("\nNhap vao tu so: ");
	scanf("%d", &ps->tuso);
	do{
		printf("\nnhap vao mau so: ");
		scanf("%d", &ps->mauso);
	}while(ps->mauso==0);
	
	// kiem tra neu mau so < 0 thi chuyen dau tru tu mau len tren

}

void rutgon(phanso *ps){
	//tim USCLN
	int a = ps->tuso;
	int b = ps->mauso;
	
	abs(a);
	abs(b);
	
	int UCLN = 1;
	
	// TH1: a = 0;  b = 0
	if(a==0 || b ==0){
		UCLN = a+b;
	}else{
		//Th2:
		while(a!=b){
			if(a>b){
				a = a-b;
			}else
				b = b-a;
		}
		UCLN = a;
	}
	ps->tuso /= UCLN;
	ps->mauso /= UCLN;
	
}

void inPhanSo(phanso ps){
	if(ps.mauso < 0){
		ps.tuso *=-1;
		ps.mauso *= -1;
	}
	rutgon(&ps);
	printf("%d/%d", ps.tuso, ps.mauso );
}

int main(){
	phanso ps1, ps2;
	printf("Nhap phan so thu nhat: ");
	NhapPhanSo(&ps1);
	printf("\nNhap phan so thu hai: ");
	NhapPhanSo(&ps2);
	printf("\nPhan so thu nhat vua nhap la: ");
	inPhanSo(ps1);
	printf("\nPhan so thu hai vua nhap la: ");
	inPhanSo(ps2);
}
