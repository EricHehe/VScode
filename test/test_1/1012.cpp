#include<iostream>
#include<cmath>
#include<string>
using namespace std;
//class Test{
//private:
//	int real,imag;
//public:
//	void init(int,int);
//	double abs();
//};
//inline void Test::init(int a,int b){
//	real=a;
//	imag=b;
//}
//inline double Test::abs(){
//	double t;
//	t=real*real+imag*imag;
//	return sqrt(t);
//}
//int main(){
//	Test test;
//	test.init(2,3);
//	cout<<test.abs();
//	return 0;
//}

//10121
//class Test{
//private:
//	int year;
//public:
//	int month;
//	void setYear(int a){
//		year=a;
//	}
//	int getYear(){
//		return year;
//	}
//};
//int main(){
//	Test a,*b;
//	b=&a;
//	a.month=10;
//	cout<<a.month<<":"<<b->month<<":"<<(*b).month;
//	return 0;
//}

//10122
//class Test{
//private:
//	int x;
//	int y;
//	/*int &px;
//	const double pi;*/
//public:
//	//Test(int);
//	Test(int ax=10,int ay=20);
//	void print(){
//		cout<<x<<":"<<y<<endl;
//	}
//};
////Test::Test(int a):x(a),px(x),pi(3.14159){}
//Test::Test(int ax,int ay){
//	x=ax;
//	y=ay;
//
//}
//int main(){
//	//Test a(10);
//	Test a;
//	Test a0(1);
//	Test a1(1,2);
//	a1.print();
//	a0.print();
//	a.print();
//	return 0;
//}

//10123
//class Test
//{
//public:
//	Test(int a=100,int b=100);
//	Test(const Test &t);
//	~Test();
//	void print();
//
//	int x,y;
//};
//
//Test::Test(int a,int b):x(a),y(b)
//{
//}
//Test::Test(const Test &t){
//	x=t.x-1;
//	y=t.y-1;}
//Test::~Test()
//{
//	cout<<"haha"<<endl;
//}
//void Test::print(){
//	cout<<x<<":"<<y<<endl;
//}
//
//void p(Test t){
//	t.print();
//	cout<<endl;
//}
//int main(){
//	Test a(10,20),d;
//	Test b(a);
//	Test c=a;
//	d=a;
//	a.print();
//	b.print();
//	c.print();
//	d.print();
//	p(a);
//	return 0;
//}


//101601
class Test{
private:
	string name;
	char *stu_no;
	float score;
	static float sum;
	static int count;
	static float ave;


public:
	Test(string name1,char *stu_no1,float score1);
	void print();
};
Test::Test(string name1,char * stu_no1,float score1){
	/*name=new char[strlen(name1)+1];
	strcpy(name,name1);*/
	name=name1;
	stu_no=new char[strlen(stu_no1)+1];
	strcpy(stu_no,stu_no1);
	score=score1;
	sum+=score;
	count++;
	ave=sum/count;
}
float Test::sum=0.0;
float Test::ave=0.0;
int Test::count=0;
void Test::print(){
	cout<<name<<endl<<stu_no<<endl<<score<<endl<<count<<endl<<sum<<endl<<ave;}

int main(){
	Test a("小明","20125536",149);
	Test b("小何","20125537",130);
	a.print();

}