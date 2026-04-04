#include<stdio.h>
main(){
	int a,b,add,sub,mul,c;
	float div;
	printf("\n enter the value of a and b");
	scanf("%d %d" ,&a,&b);
	add= a + b;
	printf("\n add=%d",add);
	sub= a-b;
	printf("\n sub=%d",sub);
	mul=a*b;
	printf("\n mul=%d", mul);
	div=(float)a/b;
	printf("\n div=%f",div);
	c=a%b;
	printf("\n reminder=%d",c);
}
