#include<iostream>
using namespace std;
class Maths{
	public:
		int a;//normal varible
		static int s;//static varible
		Maths(int a){
			this->a=a;
			
			cout<<"\n a="<<a<<" s = "<<s;
		}
		static void printStatic(){
			cout<<"\n s="<<s;
		}
};
int Maths::s=10;
main(){
	Maths m1(2),m2(3),m3(4);
	Maths::printStatic();
	}
