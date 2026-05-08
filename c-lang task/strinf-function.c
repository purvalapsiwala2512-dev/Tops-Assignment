#include<stdio.h>
#include<string.h>
main(){
	char str[10]="purva";
	printf("\n length of str=%d",strlen("tops"));
	printf("\n str concat =%s",strcat(str,"lapsiwala"));
	strupr(str);
	printf("\n upper case=%s",str);
	strrev(str);
	printf("\n rev str=%s",str);
	//strlwr(str);
	printf("\n strcmp =%d",strcmp("abc","acd"));
}
