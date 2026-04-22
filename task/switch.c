#include<stdio.h>
main(){
	int x,y;
	char choice;
	printf("\n press + for add");
	printf("\n press - for sub");
	printf("\n press * for mul");
	printf("\n press / for div");
	
	printf("\n Enter Your Choice");
	scanf("%c",&choice);
	
	printf("\n Enter the value of x and y");
	scanf("%d %d",&x,&y);
	
	switch(choice){
		case '+':
			printf("\n add of %d and %d = %d",x,y,x+y);
		break;
		case '-':
			printf("\n sub of %d and %d = %d",x,y,x-y);
		break;
		case '*':
			printf("\n mul of %d and %d = %d",x,y,x*y);
		break;
		case '/':
			printf("\n div of &d and %d = %d",x,y,x/y);
		break;
		default:
			printf("\n Invalid choice");
		break;
			
	}
}
