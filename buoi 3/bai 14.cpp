#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d" , &n);
	int countChan = 0;
	int countLe =0;
	while(n)
	{
		int t = n%10;
		if( t%2==0 )
		{
			countChan++;
		}
		else
		{
			countLe++;
		}
		n /= 10;
		
	}
	printf("%d %d", countChan, countLe);
}
