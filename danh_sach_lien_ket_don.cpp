#include <iostream>
#include <stdlib.h>
using namespace std;
//tao node
struct Node{
	int data;
	Node *next;
};

Node *CreateNode(int init_data){
	Node * node = new Node;
	node -> data = init_data;
	node->next = NULL;
	return node;
}
//tao danh sach lien ket don
Node *addelement(Node *list, int x){
	Node *node = CreateNode(x);
	list->next = node;
	return node;
}
void PrintList(Node *list){
//	Node *p = list;
	while(list != NULL){
		cout<<list->data<<"\t";
		list = list -> next;
	}
}

Node *addHead(Node *list, int x){
	Node *node = new Node;
	node ->data = x;
	node ->next = list;
	list = node;
	return list;
}
Node *addlast(Node *list, int x){
	Node *p = list;
	while(p->next != NULL){
		p = p -> next;
	}
	Node *node = new Node;
	node -> data = x;
	node ->next = p ->next;
	p -> next = node;
	return list;
}
int main(){
	int n, x;
	cout<<"\nNhap so phan tu: ";	cin>>n;
	x = rand()%100 +1;
	Node *list = CreateNode(x);
	Node *p = list;
	for(int i = 1 ; i < n  ; i++){
//		cout<<"\nNhap phan tu thu "<<i+1<<" = ";
//		cin>>x;
		x = rand()%100 + 1;
		p = addelement(p,x);
	}
	cout<<"danh sach: ";
	PrintList(list);
	cout<<"\nadd Head list: ";
	addHead(list,5);
	PrintList(list);
	cout<<"\nadd Tail list: ";
	addlast(list,9);
	PrintList(list);
}
