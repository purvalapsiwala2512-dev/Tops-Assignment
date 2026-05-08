#include<stdio.h>
int main(){
	int choice;
	float area,r,length,width,base,height,l;
	printf("\n 1.Circle \n 2.Rectangle \n 3.Triangle \n 4.Square");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Enter the r:");
			scanf("%f",&r);
			area=3.14*r*r;
			printf("\n Area of Circle=%f",area);
			break;
		
		case 2:
		printf("Enter the length and width:");
		scanf("%f %f",&length, &height);
		area=length*width;
		printf("\n Area of Rectangle=%f",area);
		break;
		
		case 3:
		printf("Enter the base and height:");
		scanf("%f %f",&base,&height);
		area=0.5*base*height;
		printf("\n Area of Triangle=%f",area);
		break;
		
		case 4:
			printf("Enter the value of l:");
			scanf("%f",&l);
			area=4*l;
			printf("\n Area of Square=%f",area);
			break;
		
		default:
		printf("\n wrong choice");	
	}
}
