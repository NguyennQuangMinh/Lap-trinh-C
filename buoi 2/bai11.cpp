#include<stdio.h>

int main()
{
	int k,n,w;
	scanf("%d %d %d", &k, &n, &w);
	int sum = 0;
	int vay;
	for(int i=1 ; i<w+1; i++)
	{
		int c= k*i;
		sum = sum +c;
	}
	if ( n < sum )
	{
		vay = sum - n;
	}
	else{
		vay = 0;
	}
	printf("%d", vay);
	
}
