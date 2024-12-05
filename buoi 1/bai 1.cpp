//Bai 1. Viet chuong trinh in 70 so dau ca dãy fibonacci: 1 1 2 3 5 8 13 21 34 
#include <stdio.h>

void printFibonucci(int n){
	long long a = 1, b = 1, c;
	printf("%lld\n%lld\n", a, b);
	for(int i = 3; i<=n; i++){
	c=a+b;
	printf("%lld\n", c);
	a=b;
	b=c;
	}
}

int main() {
   int n = 70;
   printFibonucci(n);   
}



