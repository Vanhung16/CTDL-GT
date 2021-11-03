#include <iostream>
#include <malloc.h>

using namespace std;

struct Node{
	int data;
	Node *next;
};
Node *CreateNode(int x){
	Node *node = new Node;
	node->data = x;
	node->next = NULL;
	return node;
}
Node *addElement(Node *list, int x){
	Node *node = CreateNode(x);
	list->next = node;
	return node;
}
void printlist(Node *list){
	Node *p = list;
	while(p != NULL){
		cout<<p->data<<"\t";
		p = p->next;
	}
}
Node *addtail(Node *list, int x){
	
	Node *p = list;
	while(p->next != NULL){
		p = p->next;
	}
	Node *node = new Node;
	node -> data = x;
	node -> next = NULL;
	p -> next = node;
	return list;
}
Node *addhead(Node *list, int x){ 
	Node *node = new Node;
	node->data = x;
	node->next = list;
	list = node;
	return list;
}
Node *addat(Node *list, int x, int k){
	Node *node = new Node;
	Node *p = list;
	int i = 0;
	while(p != NULL){
		if(i == k){
			break;
		}
		i++;
		p = p->next;
	}
	node -> data = x;
	node->next = p->next;
	p->next = node;
	return list;
	
}

Node *deltail(Node *list){
	Node *p = list;
	while(p->next->next != NULL){
		p = p -> next;
	}
	delete(p->next);
	p->next = NULL;
	
	return list;
}
Node *delhead(Node *list){
	Node *p = list;
	while(p->next->next != NULL){
		p = p->next;
		break;
	}
	delete(p->next);
	return p;
}
int main(){
	int n,x;
	cin>>n;
	cin>>x;
	Node *list = CreateNode(x);
	Node *p = list;
	for(int i = 1 ; i < n ; i++){
		x++;
		p = addElement(p,x);
	}
	printlist(list);
		cout<<"\n add head: ";
	list = addhead(list,1111);
	printlist(list);
	cout<<"\n add tail: ";
	list = addtail(list,111);
	printlist(list);
	cout<<"\nadd at:";
	list = addat(list,1111,3);
	printlist(list);
	cout<<"\ndelete tail: ";
	list = deltail(list);
	printlist(list);
	cout<<"\ndelete head: ";
	list = delhead(list);
	printlist(list);
}
