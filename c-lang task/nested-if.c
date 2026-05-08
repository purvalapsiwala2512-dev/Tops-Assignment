#include<stdio.h>
/*
Nested if
if(condition){
  if(condition){
   }
}
*/
main(){
	int maths,phy,chem,total,subtotal;
	printf("Enter Marks of maths phy chem");
	scanf("%d %d %d",&maths,&phy,&chem);
	
	if(maths >=65 && phy >=55 && chem >=50){
		total=maths+phy+chem;
		subtotal=maths+phy;
		if(subtotal>=145 || total >=190){
			printf ("\n Eligible for admision");
		}
		else{
			printf("\n inner not eligible for admision");
		}
	}
		else{
			printf("\n Outer not eligible for admision");
		
	}
}
