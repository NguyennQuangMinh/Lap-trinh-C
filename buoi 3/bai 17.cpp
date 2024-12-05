#include<stdio.h>
#include<math.h>

int main()
{
	long long n;
	scanf("%lld", &n);
	int countChan =0;
	int countLe =0;
	while(n)
	{
		int t=n%10;
		if(t%2==0)
		{
			countChan++;
		}
		else if( t%2 !=0 )
		{
			countLe++;
		}
		n /= 10;
	}
	if(countChan == countLe)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
