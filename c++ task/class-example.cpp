#include<iostream>
using namespace std;
class Student{
   public: 
   //data member
   char name[20];
   char email[20];
   
   //member function
   void getStudentInfo(){
   	cout<<"\n Enter student name and email";
   	cin>>name>>email;
   }
   void showStudentInfo(){
   	cout<<"\n Student Name="<<name;
   	cout<<"\n Student Email="<<email;
   }
};
   main(){
   	Student s1;
   	s1.getStudentInfo();
   	s1.showStudentInfo();
   }
