#include<stdio.h>
main(){
	int i,j;
	printf("\n Multiplication Tables from 1 to 5:");
	for(i=1;i<=5;i++){
		printf("\n Table %d",i);
		for(j=1;j<=10;j++){
			printf("\n %d*%d = %d",i,j,i*j);
		}
		printf(" \n");
	}
}
