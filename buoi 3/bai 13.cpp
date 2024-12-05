#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d" , &n);
	int tongChan = 0;
	int tongLe =0;
	while(n)
	{
		int t = n%10;
		if( t%2==0 )
		{
			tongChan += t;
		}
		else
		{
			tongLe += t;
		}
		n /= 10;
		
	}
	printf("%d %d", tongChan, tongLe);
}
