#include <stdio.h>

int main()
{
	int n, a, b;
	int c;
	scanf("%d %d %d", &n, &a, &b);
	if( b<=2*a){
		if( n%2 == 0)
		{
			c = (n/2)*b;
		}
		else{
			c = (n/2)*b + a;
		}
	}
	else{
		c = n*a;
	}
	printf("c: %d",c);
}
