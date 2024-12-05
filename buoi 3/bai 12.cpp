#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d" , &n);
	int sum = 0;
	while(n)
	{
		int t = n % 10;
		sum += t;
		n /= 10;
	}
	printf("%d", sum);
}
