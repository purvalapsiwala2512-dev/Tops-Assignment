#include<stdio.h>
float pi=3.14;// global variable
void test(){
	printf("\n global variable in function pi=%f",pi);
}
void add(int a,int b){//a and b formal parameter
	int c=a+b;
	printf("\n addition=%d",c);
}
main(){
	int x=10;//local variable
	
	{
		int y=90;//local variable
		printf("\n y=%d",y);
	}
	printf("\n global variable pi=%f",pi);
	test();
	add(10,20);
} 
