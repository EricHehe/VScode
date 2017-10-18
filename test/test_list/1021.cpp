#include<iostream>
using namespace std;
const int Maxsize=20;
typedef struct{
	int data[Maxsize];
	int length;
} Sqlist;
Sqlist init(){
	Sqlist *sqlist;
	sqlist=(Sqlist *)malloc(sizeof(Sqlist));
	if(sqlist)
		cout<<"ok"<<endl;
	else 
		cout<<"error";
	sqlist->length=10;
	return *sqlist;
}
void initdata(Sqlist &sqlist){
	int i=0;
	for(i=0;i<sqlist.length;i++){
		sqlist.data[i]=i+1;
	}
}
void showData(Sqlist sqlist){
	/*int i=0;*/
	for(int i=0;i<sqlist.length;i++){
		cout<<sqlist.data[i]<<endl;
	}
}
int insert_location(Sqlist sqlist,int x){
	int location=sqlist.length-1;
	for(int i=0;i<sqlist.length;i++)
		if(sqlist.data[i]>x){
			location=i;
			//break;//和下面一样
			return location;
		}
	return location;
}
void insert(Sqlist &sqlist,int location,int x){
	for(int i=sqlist.length;i>=location;i--)
		sqlist.data[i+1]=sqlist.data[i];
	sqlist.data[location]=x;
	(sqlist.length)++;
}
//删除表中小标为p的元素
int deletedata(Sqlist &sqlist,int p){
	if(p<0||p>sqlist.length) 
		return 0;
	for(int i=p;i<sqlist.length-1;i++)
		sqlist.data[i]=sqlist.data[i+1];
	(sqlist.length)--;
	return 1;
}
void merge(Sqlist list_a,Sqlist list_b,Sqlist &list_c){
	int i=0,j=0,k=0;
	while(i<list_a.length&&j<list_b.length){
		if(list_a.data[i]<list_b.data[j]){
			list_c.data[k]=list_a.data[i];
			i++;
			k++;
		}else{
			list_c.data[k]=list_b.data[j];
			j++;
			k++;
		}
	}
	while(i<list_a.length){
		list_c.data[k]=list_a.data[i];
		i++;
		k++;
	}
	while(j<list_c.length){
		list_c.data[k]=list_b.data[j];
		j++;
		k++;
	}
	list_c.length=list_a.length+list_b.length;
}
int main(){
	//Sqlist sqlist;
	//sqlist=init();
	//initdata(sqlist);
	//showData(sqlist);
	//int a=insert_location(sqlist,5);
	//cout<<a<<endl;
	//insert(sqlist,a,5);
	//showData(sqlist);
	///*sqlist.length=2;
	//showData(sqlist);*/


	Sqlist list_a=init(),list_b=init(),list_c=init();
	initdata(list_a);
	initdata(list_b);
	merge(list_a,list_b,list_c);
	showData(list_c);
	return 0;
}