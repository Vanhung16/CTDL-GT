#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
typedef node *list;
void create(list &l){
	l = NULL;
}

void duyet_list(list l){
	while(l!=NULL){
		cout<<l->data<<" ";
		l = l ->next;
	}
}
node *add_first(list &l, int x){
	node *p = new node;
	p->data=x;
	p->next= l;
	l=p;
	return p;
}
node *add_last(node *list, int x){
	node *p = list;
	while(p->next!=NULL){
		p = p->next;
	}
	node *temp = new node;
	temp->data = x;
	temp->next = NULL;
	p->next = temp;
	return list;
}
int main(){
	list l;
	//create(l);
	add_first(l,1);
	add_first(l,2);
	add_first(l,3);
	add_first(l,4);
	add_last(l,5);
	duyet_list(l);
}
