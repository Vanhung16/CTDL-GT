#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *CreateNode(int x){
	Node *node = new Node;
	node ->data = x;
	node ->next = NULL;
	return node;
}
Node *addElement(Node *list, int x){
	Node *node = CreateNode(x);
	list -> next = node;
	return node;
}
void PrintList(Node *list){
	Node *p = list;
	while(p != NULL){
		cout<<p->data<<"\t";
		p = p -> next;
	}
}
int main(){
	int n;
	int x;
	cout<<"\nNhap so phan tu : ";		cin>>n;
	x= rand()%100 + 1;
	Node *list = CreateNode(x);
	Node *p = list;
	for(int i = 1 ; i < n ; i++){
		x = rand()%100 + 50;
		p = addElement(p,x);
	}
	PrintList(list);
}
