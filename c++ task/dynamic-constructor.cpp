#include<iostream>
using namespace std;
class Maths{
	public:
	int x,y,a,b;//data member
	Maths(int m,int n){
		x=m;
		y=n;
	}
	void printData(){
		cout<<"\n x="<<x<<"\t y= "<<y;
	}
};
main(){
	Maths *m1 = new Maths(12,23);
	m1->printData();
}
