#include<stdio.h>
main(){
	int a=10,b=3,c,n=12,m=5,add,mul,sub;
	float div;
	c=a%b;
	printf("\n reminder=%d",c);
	c=n%m;
	printf("\n reminder=%d",c);
    n--;
	printf("\n n=%d",n);
	n++;
	printf("\n n=%d",n);
	add=a+b;
	printf("\n add=%d",add);
	sub=a-b;
	printf("\n sub=%d",sub);
	mul=a*b;
	printf("\n mul=%d",mul);
	div=(float)a/b;
	printf("\n div=%f",div);
}
