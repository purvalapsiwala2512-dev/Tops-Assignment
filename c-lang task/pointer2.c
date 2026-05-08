#include<stdio.h>
main(){
	int a=10;
	int *ptr;//pointer declare
	ptr = &a;
	*ptr = 0;
	
	printf("\n value of a=%d",a);
}
