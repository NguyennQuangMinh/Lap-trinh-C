#include <stdio.h>
#include <string.h>

// tao kieu du lieu struct ngay-thang-nam
struct date{
	int day;
	int month;
	int year;
};

// ham nhap vao ngay-thang-nam
void inputDate(struct date &d)
{
	printf("nhap ngay: ");
	scanf("%d", &d.day);
	printf("\nnhap thang: ");
	scanf("%d", &d.month);
	printf("\nnhap nam: ");
	scanf("%d", &d.year);	
}

// ham in ra ngay thang nam
void print_Date(struct date d){
	printf("%d/%d/%d/", d.day, d.month, d.year);
}

int check_date(struct date d){
	if(d.day < 0 || d.month<0 || d.year< 0){
		return 0;
	}
	if(d.month>12){
		return 0;
	}
	if(d.month==2){
		if(d.day>28){
			return 0;
		}
	}
	if(d.month==1 || d.month==3 || d.month==5 || d.month==7 || d.month == 8 || d.month == 10 || d.month ==12){
		if(d.day>31){
			return 0;
		}
	}else if(d.day>30){
		return 0;
	}
	return 1;
}

int main(){
	struct date mydate; //	tao 1 bien co du lieu la kieu cau truc Date
	inputDate(mydate); // nhap vao ngay thang nam
	printf("\n---\n"); 
	print_Date(mydate); // in ra ngay thang nam vua nhap
	printf("\nkiem tra ngay hop le: %s", check_date(mydate)==1?"Hop le":"Khong hop le");
}
