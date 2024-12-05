#include <stdio.h>

int main()
{
	int d1,d2,d3;
	scanf("%d %d %d", &d1, &d2, &d3);
	int op1 = d1 + d2 +d3;
	int op2 = 2*d1+2*d2;
	int op3 = 2*d1 + 2*d3;
	int op4 = 2*d2 + 2*d3;
	int min = op1;
	if(op2 < min)
	{
		min = op2;
	}
		if(op3 < min)
	{
		min = op3;
	}
		if(op4 < min)
	{
		min = op4;
	}
	printf("%d",min);
}
