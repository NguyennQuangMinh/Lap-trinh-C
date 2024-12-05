// operat?- toan tu (+-*/%), dau bang la phep gan
// ++ tang them 1 don vi, -- giam di 1 don vi
#include <stdio.h>
#include <math.h> // thu vien toan hoc de dung cho cac lenh nhu sqrt, abs, pow,... 

int main()
{
	long long n;
	long long s1, s2, s3;
	printf("moi ban nhap so luong phan tu n: ");
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		s1 = (n+1)*((n-1) / 1 + 1) / 2;
		s2 = n*(n+1)*(n+2)/3;
		s3 = s2-s1;
	}
	printf("kq = %lld",s3);
	
	
	
}
