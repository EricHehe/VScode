#include<iostream>
using namespace std;
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode;
LNode *init(){
	LNode *lnode;
	lnode=(LNode *)malloc(sizeof(LNode));
	if(lnode)
		cout<<"ok"<<endl;
	else
		cout<<"error"<<endl;
	lnode->next=NULL;
	return lnode;
}
void initData(LNode *&lnode){
	int i=0;
	LNode *temp,*t;
	//ͷ�巨
	/*while(i<10){
	i++;
	temp=(LNode *)malloc(sizeof(LNode));
	temp->data=i;
	temp->next=lnode->next;
	lnode->next=temp;
	}*/
	//β�巨
	t=lnode;
	while(i<10){
		i++;
		temp=(LNode *)malloc(sizeof(LNode));
		temp->data=i;
		temp->next=NULL;
		t->next=temp;
		t=temp;

	}
}
void showData(LNode *lnode){
	LNode *temp;
	temp=lnode;
	while (temp->next!=NULL)
	{
		cout<<temp->next->data<<endl;
		temp=temp->next;
	}
}
//LNode findLocation(LNode *lnode,int x){
//
//}
void insertData(LNode *&lnode,int location_x,int insert_x){
	LNode *temp,*s;
	temp=lnode;
	while(temp->next!=NULL){
		if(temp->next->data==location_x){
			temp=temp->next;
			s=(LNode *)malloc(sizeof(LNode));
			s->data=insert_x;
			s->next=temp->next;
			temp->next=s;
			break;
		}
		temp=temp->next;
	}
}
void merge(LNode *la,LNode *lb,LNode *&lc){
	LNode *temp,*la1,*lb1,*lc1;
	lc1=lc;
	la1=la;
	lb1=lb;
	while(la1->next!=NULL&&lb1->next!=NULL){
		if(la1->next->data<lb1->next->data){
			temp=(LNode *)malloc(sizeof(LNode));
			temp->data=la1->next->data;
			temp->next=NULL;
			lc1->next=temp;
			lc1=temp;
			la1=la1->next;
		}
		else
		{
			temp=(LNode *)malloc(sizeof(LNode));
			temp->data=lb1->next->data;
			temp->next=NULL;
			lc1->next=temp;
			lc1=temp;
			lb1=lb1->next;
		}

	}
	while(la1->next!=NULL){
		temp=(LNode *)malloc(sizeof(LNode));
		temp->data=la1->next->data;
		temp->next=NULL;
		lc1->next=temp;
		lc1=temp;
		la1=la1->next;
	}
	while(lb1->next!=NULL){
		temp=(LNode *)malloc(sizeof(LNode));
		temp->data=lb1->next->data;
		temp->next=NULL;
		lc1->next=temp;
		lc1=temp;
		lb1=lb1->next;
	}

}
void merge1(LNode *la,LNode *lb,LNode *&lc){
	LNode *a,*b,*c;
	a=la->next;
	b=lb->next;
	c=lc;
	free(la);
	free(lb);
	while(a!=NULL&&b!=NULL){
		if(a->data<b->data){
			c->next=a;
			c=c->next;
			a=a->next;
		}else
		{
			c->next=b;
			c=c->next;
			b=b->next;
		}
	}
	c->next=NULL;
	if(a!=NULL){
		c->next=a;
	}
	if(b!=NULL){
		c->next=b;
	}
}
int main(){
	//LNode *la;
	//la=init();
	/////*la=(LNode *)malloc(sizeof(LNode));
	////la->next=NULL;*/
	//initData(la);
	//insertData(la,7,100);
	//showData(la);

	////merge
	//LNode *la,*lb,*lc;
	//la=init();
	//lb=init();
	//lc=init();
	//initData(la);
	//initData(lb);
	//merge(la,lb,lc);
	//showData(lc);

	//merge1
	LNode *la,*lb,*lc;
	la=init();
	lb=init();
	lc=init();
	initData(la);
	initData(lb);
	merge1(la,lb,lc);
	showData(lc);
	return 0;

}