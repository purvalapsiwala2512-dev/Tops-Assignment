#include<iostream>
using namespace std;
class Test{
	protected:
		int x;
		public:
			
			Test(){
				x=100;
			}
			inline void display(){
				cout<<"\n test method";
			}
};
class Child:public Test{
	public:
		void childMethod(){
			cout<<"\n parents prcted data ="<<x;
		}
};
main(){
	Test t1;
	int i;
	for(i=0;i<3;i++){
		t1.display();
	}
	Child c1;
	c1.childMethod();
}
