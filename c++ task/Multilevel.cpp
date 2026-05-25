#include<iostream>
using namespace std;
class Country{
	public:
		int cid;
		char cname;
		void getCountry(){
			cout<<"\n Enter country id and name";
			cin>>cid>>cname;
		}
};
class State: public Country{
	public:
		int stateid;
		char stateName[20];
		void getState(){
			cout<<"\n Enter stateyid and name";
			cin>>stateid>>stateName;
		}
};
class City: public State{
	public:
		int cityid;
		char address[50];
		char cityname[20];
		void getCity(){
			cout<<"\n Enter cityid and name";
			cin>>cityid>>cityname;
		}
		void getAddress(){
			cout<<"Enter address";
			cin.getline(address,50);
		}
};
main(){
	City c1;
	c1.getAddress();
	c1.getCity();
	c1.getState();
	c1.getCountry();
}
