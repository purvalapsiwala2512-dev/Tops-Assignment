#include<stdio.h>
main(){
	int Num1,Num2,Max;
	printf("Enter Two Numbers:");
	scanf("%d %d",&Num1,&Num2);
	Max=(Num1>Num2)?Num1:Num2;
	printf("\n The Maximum Number is:%d",Max);
}
