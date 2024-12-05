#include <stdio.h>

struct Date{
	int ngay;
	int thang;
	int nam;
};

void inputDate(struct Date &d){
	printf("nhap ngay: ");
	scanf("%d", &d.ngay);
	printf("\nnhap thang: ");
	scanf("%d", &d.thang);
	printf("\nnhap nam: ");
	scanf("%d", &d.nam);
}

void printDate(struct Date d){
	printf("\n%d/%d/%d", d.ngay, d.thang, d.nam);
}

int main(){
	struct Date myDate;
	inputDate(myDate);
	printf("\n----\n");
	printDate(myDate);
}
