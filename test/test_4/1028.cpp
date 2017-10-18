#include<iostream>
#include<string>
using namespace std;
//多态性:编译时多态  函数重载与模板实现，

//运算符重载（3种）
//类外定义普通函数（缺点：数据成员为共有）
//class Complex{
//	//private:
//	//double real,imag;
//public:
//	Complex(double real1=0,double imag1=0){
//		real=real1;
//		imag=imag1;
//	}
//	void ptint(){
//	cout<<real<<":"<<imag<<endl;
//	}
//	double real,imag;
//};
//Complex operator+(Complex com1,Complex com2){
//	Complex temp;
//	temp.real=com1.real+com2.real;
//	temp.imag=com1.imag+com2.imag;
//	return temp;
//}
//int main(){
//	Complex com1(1.1,2.2),com2(3.3,4.4),total;
//	total=com1+com2;
//	total.ptint();
//	return 0;
//}

//友元函数运算符重载函数
//class Complex{
//private:
//	double real,imag;
//public:
//	Complex(double real1=0,double imag1=0){
//		real=real1;
//		imag=imag1;
//	}
//	friend Complex operator+(Complex &com1,Complex &com2){
//		/*Complex temp;
//		temp.real=com1.real+com2.real;
//		temp.imag=com1.imag+com2.imag;
//		return temp;*/
//		return Complex(com1.real+com2.real,com1.imag+com2.imag);
//	}
//	void ptint(){
//		cout<<real<<":"<<imag<<endl;
//	}
//};
//int main(){
//	Complex com1(1.1,2.2),com2(3.3,4.4),total;
//	total=com1+com2;
//	total.ptint();
//	return 0;
//	return 0;
//}


//成员运算符重载函数
//class Complex{
//private:
//	double real;
//	double imag;
//public:
//	Complex(double real1=0,double imag1=0){
//		real=real1;
//		imag=imag1;
//	}
//	Complex operator+(Complex com){
//		return Complex(real+com.real,imag+com.imag);
//	}
//	void ptint(){
//		cout<<real<<":"<<imag<<endl;
//	}
//};
//int main(){
//	Complex com1(1.1,2.2),com2(3.3,4.4),total;
//	total=com1+com2;
//	total.ptint();
//	return 0;
//}

//单目运算符（++，--）
//友元
//class Coord{
//private:
//	int a,b;
//public:
//	Coord(int a1=0,int b1=0);
//	void print();
//	friend Coord operator++(Coord &co);
//	friend Coord operator++(Coord &co,int);
//};
//Coord::Coord(int a1,int b1){
//	a=a1;
//	b=b1;
//}
//void Coord::print(){
//	cout<<a<<":"<<b<<endl;
//}
//Coord operator++(Coord &co){
//	++co.a;
//	++co.b;
//	return co;
//}
//Coord operator++(Coord &co,int){
//	co.a++;
//	co.b++;
//	return co;
//}
//int main(){
//	Coord co1(10,20),co2(30,40),co3;
//	++co1;
//	co3=co2++;
//	co1.print();
//	co2.print();
//	co3.print();
//	return 0;
//}

//成员
//class Coord{
//private:
//	int a,b;
//public:
//	Coord(int a1=0,int b1=0);
//	void print();
//	Coord operator--();
//	Coord operator--(int);
//};
//Coord::Coord(int a1,int b1){
//	a=a1;
//	b=b1;
//}
//void Coord::print(){
//	cout<<a<<":"<<b<<endl;
//}
//Coord Coord::operator--(){
//	--a;
//	--b;
//	return *this;
//}
//Coord Coord:: operator--(int){
//	a--;
//	b--;
//	return *this;
//}
//int main(){
//	Coord co1(10,20),co2(30,40),co3;
//	--co1;
//	co3=co2--;
//	co1.print();
//	co2.print();
//	co3.print();
//	return 0;
//}


//赋值运算符=的重载（类中含有指针类型数据成员，使用浅层复制会产生指针悬挂问题）
//class String{
//private:
//	char *ptr;
//public:
//	String(char *s){
//		cout<<"constructor called"<<endl;
//		ptr=new char[strlen(s)+1];
//		strcpy(ptr,s);
//		//ptr=s;
//	}
//	~String(){
//		cout<<"destructor called"<<ptr<<endl;
//		delete ptr;
//	}
//};
//int main(){
//	String s1("book"),s2("jeep");
//	s2=s1;
//	return 0;
//}

//深层复制
//class String{
//private:
//	char *ptr;
//public:
//	String(char *s){
//		cout<<"constructor called"<<endl;
//		ptr=new char[strlen(s)+1];
//		strcpy(ptr,s);
//		//ptr=s;
//	}
//	~String(){
//		cout<<"destructor called"<<ptr<<endl;
//		delete ptr;
//	}
//	String &operator=(const String &s);
//};
//String &String::operator=(const String &s){
//	if(this==&s) return *this;
//	delete ptr;
//	ptr=new char[strlen(s.ptr)+1];
//	strcpy(ptr,s.ptr);
//	return *this;
//};
//int main(){
//	String s1("book"),s2("jeep");
//	s2=s1;
//	return 0;
//}


//[]的重载
//class Vector{
//private:
//	int v[4];
//public:
//	Vector(int a=0,int b=0,int c=0,int d=0);
//	int &operator[](int i);
//};
//Vector::Vector(int a,int b,int c,int d){
//	v[0]=a;
//	v[1]=b;
//	v[2]=c;
//	v[3]=d;
//}
//int &Vector::operator[](int i){
//	if(i<0||i>3) {
//	cout<<"error"<<endl;
//	exit(1);
//	}
//	return v[i];
//}
//int main(){
//	Vector v(1,2,3,4);	
//	cout<<v[1];
//	return 0;
//}




//运行时多态     虚函数实现（类似于java中抽象函数，继承含有该方法的类的不同的类对其有不同的实现）
