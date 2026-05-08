#include<stdio.h>
main(){
	int i,j,a[5],temp;
	for(i=0;i<5;i++){
		printf("\n Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	//sort
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//print
	for(i=0;i<5;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
}
