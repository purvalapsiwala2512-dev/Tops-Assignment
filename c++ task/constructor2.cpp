#include<iostream>
using namespace std;
class AreaOfCircle{
	public:
		int r;//data member
		//default constructor
		AreaOfCircle(){
			cout<<"\n Enter radius";
			cin>>r;
		}
		AreaOfCircle(int radius){
			r=radius;
		}
		void findArea(){
			float a=3.14*r*r;
			cout<<"\n area of circle="<<a;
		}
};
main(){
	AreaOfCircle a1;
	a1.findArea();
	AreaOfCircle a2(20);
	a2.findArea();
}
