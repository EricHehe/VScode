#include<iostream>
#include<string>
using namespace std;

//dan ji cheng
//class Base{
//private:
//	int a;
//	int b;
//public:
//	void print(){
//		cout<<a<<endl<<b<<endl;
//	}
//	Base(int,int);
//};
//Base::Base(int a1,int b1){
//	a=a1;
//	b=b1;
//}
//class Derived:public Base{
//private:
//	int c;
//	Base base1;
//	Base base2;
//public:
//	Derived(int,int,int,int,int,int,int);
//	void print(){
//		Base::print();
//		cout<<c<<endl;
//		base1.print();
//		base2.print();
//	}
//
//};
//Derived::Derived(int a1,int b1,int c1,int d,int e,int f,int g):Base(a1,b1),base2(d,e),base1(f,g){
//	c=c1;
//}
//int main(){
//	Derived a(1,2,3,4,5,6,7);
//	a.Base::print();
//	a.print();
//	return 0;
//}


//多继承 虚基类
class Base{
private:
	string name;
	char *sex;
	int age;
public:
	Base(string name1,char *sex1,int age1){
		name=name1;
		sex=new char[strlen(sex1)+1];
		strcpy(sex,sex1);

		//sex=sex1;  

		age=age1;
	}
	void print(){
		cout<<name<<endl<<sex<<endl<<age<<endl;
	}
};
class Base1:virtual public Base{
private:
	string major;
public:
	Base1(string name1,char *sex1,int age1,string major1):Base(name1,sex1,age1){
		major=major1;
	}
	void print(){
		//Base::print();
		cout<<major<<endl;
	}
};
class Base2:virtual public Base{
private:
	string dept;
public:
	Base2(string name1,char *sex1,int age1,string dept1):Base(name1,sex1,age1){
		dept=dept1;
	};
	void print(){
		//Base::print();
		cout<<dept<<endl;
	}
};
class Student:public Base1,public Base2{
public:
	Student(string name1,char *sex1,int age1,string major1,string dept1):Base(name1,sex1,age1),Base1(name1,sex1,age1,major1),Base2(name1,sex1,age1,dept1){}
	void print(){
		Base::print();
		Base1::print();
		Base2::print();
	};
};
int main(){
	Student s("小何","男",20,"计算机","教务处");
	s.print();
	return 0;
}