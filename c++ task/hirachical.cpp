#include<iostream>
using namespace std;
// class a class b: public a class c:public a
class Account{
	public:
		char accNo[16];
		char accHolder[50];
		char accEmail[50];
		float balance;
		
		void getInfo(){
			cout<<"\n Enter account holder name and email balalnce";
			cin>>accNo;
			cin>>accHolder;
			cin>>accEmail;
			cin>>balance;
		}
};
class Saving : private Account{
		public:
		void calcIntrest(){
			getInfo();
			balance = balance + (balance * 0.02);
		}
		void printInfo(){
	cout<<"\n Accno"<<accNo;
	cout<<"\n Holder="<<accHolder;
	cout<<"\n Email="<<accEmail;
	cout<<"\n current bal:"<<balance;
	
}
};
class Current : private Account{
	public:
		void calcIntrest(){
			getInfo();
			balance = balance + (balance * 0.02);
		}
		void printInfo(){
	cout<<"\n Accno"<<accNo;
	cout<<"\n Holder="<<accHolder;
	cout<<"\n Email="<<accEmail;
	cout<<"\n current bal:"<<balance;
		}
};
main(){
	int ch;
	cout<<"\n press 1 for saving press 2 for current \n Enter choice";
	cin>>ch;
	if(ch==1){
		Saving s1;
		s1.calcIntrest();
		s1.printInfo();
	}
	else if(ch==2){
		Current c1;
		c1.calcIntrest();
		c1.printInfo();
	}
	else{
		cout<<"\n Wrong choice";
	}
}
