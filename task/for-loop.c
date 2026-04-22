#include<stdio.h>
/*
parts of Loop:condition modification
for(init;condi;mod){
//block
}
*/
//To print 1 to 10
main(){
	int i,enroll,j;
	for(i=1;i<=10;i++){
		printf("\n i=%d",i);
	}
	for(j=30;j>=20;j--){
		printf("\n j=%d",j);
		}
		for(i=1;i<=6;i++){
			printf("\n Enter enroll of student no=%d:=>",i);
			scanf("\n %d of enroll=%d",i,enroll);
	}
}
