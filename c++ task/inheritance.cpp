#include<iostream>
using namespace std;
class Category{
   public:
   	 int catid;
   	 char catname[20];
   	
   	 void getCategory(){
   	     cout<<"\n Enter category";
			cin>>catname;	
	   }
};
class Product:public Category{
	public:
		char pname;
		float price;
		void getProduct(){
			getCategory();
			cout<<"\n Enter Product name and price";
			cin>>pname>>price;
		}
		void printProduct(){
			cout<<"\n Category:"<<catname;
			cout<<"\n ProductName:"<<pname;
			cout<<"\n price:"<<price;
		}
};
main(){
	Product p1;
	p1.getProduct();
	p1.printProduct();
}
