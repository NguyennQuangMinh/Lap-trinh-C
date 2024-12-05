#include <stdio.h>
#include <math.h>

// tong cac chu so chia het cho 8 va co chua so 6 khong

int check1(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n%10;
		n /= 10;
	}
	return sum%8 ==0;
}

int check2(int n)
{
	while(n)
	{
		if( n%10 ==6 ) return 1;
		n /= 10;
	}
	return 0;
}

//parameter: tham so
//arguments: doi so, tham so thuc su
int main()
{
	int n;
	for( int i=1; i<=n; i++)
	{
		if( check1 == 1 && check2 == 1)
		{
			
		}
	}
	
}
