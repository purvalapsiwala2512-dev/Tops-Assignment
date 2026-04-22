#include<stdio.h>
/*
returntype functionname(p1,p2..){
//block
}
*/
// function declaration
void printMsg();
void add(int x,int y);
main(){
	printMsg();//calling
	add(20,40);
	add(200,400);
}
//function defination
void printMsg(){
	printf("\n Hello world");
}
void add(int x,int y){
	printf("\n addition of %d and %d= %d",x,y,x+y);
}

