#include<stdio.h>
union fruit{
	
	int qty;
	char name[10];
	float price;
	
}f;
main(){
	printf("\n Enter fruits qty name price");
	scanf("%d %s %f",&f.qty,f.name,&f.price);
//	scanf("%s",f.name);

	
	printf("\n fruit price=%f",f.price);
	printf("\n fruit name=%s",f.name);
	
	printf("\n fruit Qty=%d",f.qty);
}
