#include<stdio.h>
main(){
	int a;
	printf("\n enter a");
	scanf("%d",&a);
	
	if((a%400==0) || (a % 4== 0 && a %100 != 0)){
		printf("\n year is leap");
	}
	else{
		printf("\n year is not leap year");
	}
}
