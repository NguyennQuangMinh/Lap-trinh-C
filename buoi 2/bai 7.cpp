#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int count=0;
	int a[] = {100, 20, 10, 5, 1};
	for(int i=0; i<=5; i++)
	{
		count += n/a[i];
		n %= a[i];
	}
	printf("count: %d",count);
}
