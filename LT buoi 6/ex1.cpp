#include<stdio.h>
#include<math.h>

//return_value_type function_name(parameter_list){
//	statement;
//}

// xay dung mot ham in ra dong xin chao ra man hinh

void xin_chao(){
	printf("xin chao!\n");
	printf("hello!\n");
}

// xay dung ham tinh tong cac so tu nhien tu 1 toi n
int sum(int n){
	int tong = 0;
	for(int i=1; i<=n; i++){
		tong +=i ;
	}
	return tong;
}

//parameter: tham so
//arguments: doi so

int main()
{
	int x = 10;
	int kq = sum(x);
	printf("%d ", kq);
	return 0;
}
