#include <stdio.h>
#include <string.h>
#include <time.h>

struct date{
	int	ngay;
	int	thang;
	int nam;
};

struct sinhvien{
	int id;
	char ten[50];
	char gioiTinh[5];
	date ngaySinh;
	int tuoi;
	float diemMon1;
	float diemMon2;
	float diemMon3;
	float diemTrungBinh;
	char hocLuc[10];
	char maLop[30];
};

typedef sinhvien SV;

void nhapSinhVien(SV &sv);
void inSinhVien(SV sv);
void tinhTuoi(SV &sv);
void tinhDiemTrungBinh(SV *sv);
void xepLoai(SV &sv);
void capNhatSinhVien(SV &sv);
void nhapDanhSachSinhVien(SV ds[], int &n);
void xuatDanhSachSinhVien(SV ds[], int n);
float timMax_DiemTrungBinh(SV ds[], int n);
int timMin_Tuoi(SV ds[], int n);
void xuatDanhSachSinhVienXepLoaiGioi(SV ds[], int n);
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]);
int timSinhVienTheoTen(SV ds[], int n, char ten[]);
void xoaSinhVienTheoId(SV ds[], int &n, int ID);
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n);
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n);

void XoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}

void nhapSinhVien(SV &sv){
	printf("\nID: "); scanf("%d", &sv.id);
	printf("\nTen: "); fflush(stdin); fgets(sv.ten, sizeof(sv.ten), stdin); XoaXuongDong(sv.ten);
	printf("\nGioi tinh: "); fflush(stdin); fgets(sv.gioiTinh, sizeof(sv.gioiTinh), stdin);XoaXuongDong(sv.gioiTinh);
	printf("\nNgaySinh: "); scanf("%d%d%d", &sv.ngaySinh.ngay, &sv.ngaySinh.thang, &sv.ngaySinh.nam);
	do{
		printf("\nDiem mon 1: ");  scanf("%f", &sv.diemMon1);
	}while(sv.diemMon1>10);
	do{
		printf("\nDiem mon 2: ");  scanf("%f", &sv.diemMon2);
	}while(sv.diemMon2>10);
	do{
		printf("\nDiem mon 3: ");  scanf("%f", &sv.diemMon3);
	}while(sv.diemMon3>10);
	printf("\nMa lop: "); fflush(stdin); fgets(sv.maLop, sizeof(sv.maLop), stdin);XoaXuongDong(sv.maLop);
}

void inSinhVien(SV sv){
    printf("%-4d | %-15s | %-6s | %02d/%02d/%04d | %-4d | %-6.2f | %-6.2f | %-6.2f | %-6.2f | %-10s | %-10s\n", 
           sv.id, sv.ten, sv.gioiTinh, sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam, 
           sv.tuoi, sv.diemMon1, sv.diemMon2, sv.diemMon3, sv.diemTrungBinh, sv.hocLuc, sv.maLop);
}

void tinhTuoi(SV &sv){
	time_t TTIME = time(0);
	tm *NOW = localtime(&TTIME);
	int NamHienTai = NOW->tm_year + 1900;
	sv.tuoi = NamHienTai - sv.ngaySinh.nam;
}

void tinhDiemTrungBinh(SV *sv){
	sv->diemTrungBinh = (sv->diemMon1 + sv->diemMon2 +sv->diemMon3)/3;
}

void xepLoai(SV &sv){
	if(sv.diemTrungBinh>=9){
		strcpy(sv.hocLuc,"XUAT SAC");
	}else if(sv.diemTrungBinh>=8){
		strcpy(sv.hocLuc, "GIOI");
	}else if(sv.diemTrungBinh>=7){
		strcpy(sv.hocLuc, "KHA");
	}else if(sv.diemTrungBinh>=6){
		strcpy(sv.hocLuc, "TRUNG BINH");
	}else {
		strcpy(sv.hocLuc, "YEU");
	}
}

void capNhatSinhVien(SV &sv){
    nhapSinhVien(sv);
    tinhTuoi(sv);
    tinhDiemTrungBinh(&sv);
    xepLoai(sv);
}

void nhapDanhSachSinhVien(SV ds[], int &n)
{	
	do{
		printf("Nhap so luong sinh vien: ");
		scanf("%d", &n);		
	}while(n<=0);
	for(int i=0; i<n; i++){
		printf("moi ban nhap sinh vien thu %d: ", i+1);
		capNhatSinhVien(ds[i]);
	}
}

void xuatDanhSachSinhVien(SV ds[], int n){
    printf("\n%-4s | %-15s | %-6s | %-10s | %-4s | %-6s | %-6s | %-6s | %-6s | %-10s | %-10s\n", 
       "ID", "Ten", "Gioi", "NgaySinh", "Tuoi", "Diem1", "Diem2", "Diem3", "DiemTB", "XepLoai", "Ma lop");
    printf("-----------------------------------------------------------------------------------------------\n");
    for(int i =0; i<n; i++){
   		inSinhVien(ds[i]); 	
	}
}

float timMax_DiemTrungBinh(SV ds[], int n)
{
	float max = ds[0].diemTrungBinh;
	for(int i =0 ; i<n ;i++){
		if(max<ds[i].diemTrungBinh){
			max = ds[i].diemTrungBinh;
		}
	}
	return max;
}

int timMin_Tuoi(SV ds[], int n){
	float min = ds[0].tuoi;
	for(int i=0; i<n; i++){
		if(min>ds[i].tuoi){
			min = ds[i].tuoi;
		}
	}
	return min;
}

void xuatDanhSachSinhVienXepLoaiGioi(SV ds[], int n){
	printf("\nDanh sach sinh vien loai Gioi la: ");
	printf("\n%-4s | %-15s | %-6s | %-10s | %-4s | %-6s | %-6s | %-6s | %-6s | %-10s | %-10s\n", 
			"ID", "Ten", "Gioi", "NgaySinh", "Tuoi", "Diem1", "Diem2", "Diem3", "DiemTB", "XepLoai", "Ma lop");
	printf("-----------------------------------------------------------------------------------------------\n");
	for(int i=0; i<n; i++){
		if(strcmp(ds[i].hocLuc, "GIOI") == 0){
    		inSinhVien(ds[i]); 
			printf("\n");	
		}
	}
}

void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]){
	printf("\nDanh sach sinh vien theo lop: ");
	printf("\n%-4s | %-15s | %-6s | %-10s | %-4s | %-6s | %-6s | %-6s | %-6s | %-10s | %-10s\n", 
			"ID", "Ten", "Gioi", "NgaySinh", "Tuoi", "Diem1", "Diem2", "Diem3", "DiemTB", "XepLoai", "Ma lop");
	printf("-----------------------------------------------------------------------------------------------\n");
	for(int i=0; i<n ; i++){
		if(strcmp(ds[i].maLop, lop) == 0){
			inSinhVien(ds[i]);
			printf("\n");
		}
	}
}

int timSinhVienTheoTen(SV ds[], int n, char ten[]){
	for(int i=0; i<n; i++){
		if(strstr(ds[i].ten, ten)){
			return 1;
		}
	}
	return 0;	
}

void xoaSinhVienTheoId(SV ds[], int &n, int ID){
	for(int i=0; i<n; i++){
		if(ds[i].id == ID){
			for(int j=0; j<n; j++){
				ds[j] = ds[j+1];
			}
			n-=1;
			return;
		}
	}
}

void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ds[i].diemTrungBinh>ds[j].diemTrungBinh){
				SV temp;
				temp = ds[i];
				ds[i]= ds[j];
				ds[j]= temp;
			}
		}
	}
}

void sapXepDanhSachSinhVienTheoTen(SV ds[], int n){
	for(int i=0; i<n-1;i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(ds[i].ten, ds[i].ten)>0){
				SV temp;
				temp = ds[i];
				ds[i]= ds[j];
				ds[j]= temp;
			}
		}
	}
}

int main(){
    SV ds[100];
    int n;
    nhapDanhSachSinhVien(ds, n);
    xuatDanhSachSinhVien(ds, n);
    printf("\ndiem trung binh cao nhat la: %.2f", timMax_DiemTrungBinh(ds, n));
    printf("\ntuoi nho nhat la: %d", timMin_Tuoi(ds, n));
    xuatDanhSachSinhVienXepLoaiGioi(ds, n);
    xuatDanhSachSinhVienTheoLop(ds, n, "DTU");
	printf("\nKet qua tim sinh vien:%d ", timSinhVienTheoTen(ds, n, "Minh"));

	sapXepDanhSachSinhVienTheoDTB(ds, n);	
	printf("\nDanh sach sinh vien theo DTB la: ");
    xuatDanhSachSinhVien(ds, n);

	sapXepDanhSachSinhVienTheoTen(ds, n);
	printf("\nDanh sach sinh vien theo ten la: ");
    xuatDanhSachSinhVien(ds, n);
    
    xoaSinhVienTheoId(ds, n, 2);
	printf("\nDanh sach sinh vien sau khi xoa la: ");
    xuatDanhSachSinhVien(ds, n);
}
