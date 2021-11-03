#include <iostream>

using namespace std;
struct Node{
	int data;
	Node *next;
};

Node *CreateNode(int x){
	Node *node = new Node;
	node -> data = x;
	node -> next = NULL;
	return node;
}

Node *addElement(Node * list, int x){
	Node *node = CreateNode(x);
	list -> next = node;
	return node;
}
void PrintList(Node *list){
	Node *p = list;
	while( p != NULL){
		cout<<p->data<<"\t";
		p = p ->next;
	}
}
Node *addHead(Node *list, int x){
	Node *p = list;
//	Node *node = new Node;
//	node -> data = x;
//	node -> next = list;
//	list = node;
	while(p->next != NULL){
		p->data = x;
		p = p->next;
		break;
	}
	return list;
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
	PrintList(list);
	cout<<"\nAdd Head: ";
	addHead(list,5);
	PrintList(list);
}
