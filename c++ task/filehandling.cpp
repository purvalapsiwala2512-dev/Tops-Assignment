#include<iostream>
#include<fstream>
using namespace std;
main(){
	char data[100];
	fstream fp1;
	fp1.open("hello.txt",ios::out);
	fp1<<"hello world";
	fp1.close();
	
	//===========reading====
	fstream fp2;
	fp2.open("hello.txt",ios::in);
	//fp2>>data;
	fp2.getline(data,20);
	cout<<"\n reading data from file ="<<data;
	fp2.close();
}
