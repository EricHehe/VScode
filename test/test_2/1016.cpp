#include<iostream>
#include<string>
using namespace std;

//��̬��Ա�������ʷǾ�̬��Ա����
//class Cat{
//private:
//	float weight;
//public:
//	static int sum_cat;
//	static float sum_weiht;
//	Cat(float weight1);
//	static void display(Cat &cat);
//	static void displaySumAndWeight();
//};
//int Cat::sum_cat=0;
//float Cat::sum_weiht=0.0;
//Cat::Cat(float weight1){
//	weight=weight1;
//	sum_cat++;
//	sum_weiht+=weight;
//}
//void Cat::display(Cat &cat){
//	cout<<"��è�أ�"<<cat.weight<<endl;
//}
//void Cat::displaySumAndWeight(){
//	cout<<sum_cat<<":"<<sum_weiht<<endl;
//}
//int main(){
//	cout<<Cat::sum_cat<<endl;
//	Cat::displaySumAndWeight();
//	Cat a(10),b(20);
//	Cat::displaySumAndWeight();
//	Cat::display(a);
//	return 0;
//}

//��Ԫ������3�֣�����Ԫ�൥�򲻴��ݡ�
//class Girl;
//class Boy{
//private:
//	char *name;
//	int age;
//public:
//	Boy(char *name2,int age1){
//		name=new char[strlen(name2)+1];
//		strcpy(name,name2);
//		age=age1;
//	}
//	//friend void print(const Boy &,const Girl &);//2;
//
//	//friend void display(const Boy &);//1
//	/*void print(){
//	cout<<name<<":"<<age<<endl;
//	}*/
//	/*Boy(char *name1,int age1){
//	name=new char[strlen(name1)+1];
//	strcpy(name,name1);
//	age=age1;
//	}*/
//	void show(Girl &);//3
//	~Boy(){
//		delete name;
//	}
//};
//class Girl{
//private:
//	int age;
//	char *name;
//public:
//	Girl(char *name1,int age1){
//		name=new char[strlen(name1)+1];
//		strcpy(name,name1);
//		age=age1;
//	}
//	//friend void print(const Boy &,const Girl &);//2;
//	//friend void Boy::show(Girl &);//3
//	friend Boy;//4    3��4ʵ�ֽ��һ����4���Խ�����boy���г�Ա������Ϊgirl����Ԫ����
//	~Girl(){
//		delete name;
//	}
//};
////void display(const Boy &boy){
////	cout<<boy.name<<boy.age<<endl;
////}//1
////void print(const Boy &boy,const Girl &girl){
////	cout<<boy.age<<":"<<boy.name<<endl<<girl.age<<":"<<girl.name<<endl;
////}//2
//void Boy::show(Girl &girl){
//	cout<<name<<":"<<age<<endl<<girl.name<<":"<<girl.age<<endl;
//}//3    �ܱ���ͨ���������㲻�� �������Ĺ��ɡ�����
//int main(){
//	Boy b("С��",20);
//	Girl g("С��",21);
//	//print(b,g);
//	b.show(g);
//return 0;
//}



//
int main(){
	const int b=2;
	int c[b];
	int a[]={1,2},n;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a[i];
	}
	
	cout<<sizeof(a)/sizeof(int)<<endl;
	return 0;
}

