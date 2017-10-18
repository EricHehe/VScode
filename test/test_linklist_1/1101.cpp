#include<iostream>
using namespace std;
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode;
void initData(LNode *&lnode){
	LNode *temp,*t;
	int i=0;
	//ͷ�巨
	//while(i<10){
	//	i++;
	//	temp=(LNode *)malloc(sizeof(LNode));
	//	temp->data=i;
	//	temp->next=lnode->next;
	//	lnode->next=temp;
	//}
	////β�巨
	t=lnode;
	while(i<10){
		i++;
		temp=(LNode *)malloc(sizeof(LNode));
		temp->data=i;
		t->next=temp;
		t=temp;
	}
	t->next=NULL;
}
void showData(LNode *lnode){
	LNode *temp;
	temp=lnode;
	while(temp->next!=NULL){
		cout<<temp->next->data<<endl;
		temp=temp->next;
	}
}
int findLnode_x(LNode *&c1,int x){
	LNode *c,*temp;
	c=c1;
	while(c->next!=NULL){
		if(c->next->data==x){
			temp=c->next;
			c->next=c->next->next;
			free(temp);
			return 1;
		}
		c=c->next;
	}
	return 0;
}
int main(){
	LNode *a;
	a=(LNode *)malloc(sizeof(LNode));
	a->next=NULL;
	initData(a);
	findLnode_x(a,3);
	showData(a);
	return 0;
}