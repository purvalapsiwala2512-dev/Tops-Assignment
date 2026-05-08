#include<stdio.h>
main(){
	int age;
	printf("\n Enter your age");
	scanf("%d",&age);
	if(age>=18){
		goto eligible;
	}
	else{
		goto noteligible;
	}
	eligible:{
	   printf("\n eligible for vote");
	   return;
	}
	noteligible:{
	   printf("\n not eligible for vote");
	   return;
	}
	
}
