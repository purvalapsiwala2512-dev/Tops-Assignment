#include<stdio.h>
main(){
	int x,y,z,m=10,n=3,round;
	float div,o,pi=3.14;
	printf("Enter the value of x and y");
	scanf("%d %d",&x,&y);
	z=x*y;
	printf("\n z=%d",z);
	div=(float)x/y;
	printf("\n div=%f",div);
	//Type Conversion
	o=(float)m/n;
	printf("\n Ans of o=%f",o);
	round=(int)pi;
	printf("\n round=%d",round);
}
