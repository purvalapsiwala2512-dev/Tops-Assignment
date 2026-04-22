#include<stdio.h>
main(){
	int i,num;
	for(i=1;i<=10;i++){
		if(i==10 || i==7){
			continue;
		}
		printf("\n i=%d",i);
	}
	for(;;){
		printf("\n enter num");
		scanf("%d",&num);
		if(num==0){
			break;
		}
	}
}
