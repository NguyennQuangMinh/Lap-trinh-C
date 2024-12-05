#include<stdio.h>

int main()
{
	int arr[] = {1, 2 , 3, 4, 5};
	int *ptr ;
//	printf("%x\n", ptr);
//	printf("%x\n", &arr[0]);
	
	for(int i =0; i<5; i++){
		ptr = &arr[i];
		printf("%x ", *ptr);
	}
//	printf("%d\n", *ptr);
}
