#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d" , &n);
	int count = 0;
	while(n)
	{
		n /= 10;
		count++;
	}
	printf("%d", count);
}
