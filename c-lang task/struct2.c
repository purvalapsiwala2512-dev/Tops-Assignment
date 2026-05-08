#include<stdio.h>
struct Fruits{
	int fno;
	char fname[20];
	float price;
};
main(){
	struct Fruits f[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n Enter fruits no name and price of fruit:%d",i+1);
		scanf("%d %s %f",&f[i].fno,f[i].fname,&f[i].price);
	}
	printf("\n fruitno fruitname price");
	for(i=0;i<5;i++){
		printf("\n %d %s %f",f[i].fno,f[i].fname,f[i].price);
	}
}
