#include <iostream>

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
	list -> next = node;
	return list;
}

void printlist(Node *list)
{
	Node *p = list;
	while(p->next != NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
}
int main(){
	int n,x;
	cin>>n;
	cin>>x;
	Node *list = CreateNode(x);
	Node *p = list;
	for(int i = 0 ; i < n ; i++){
		x++;
		p = addElement(p,x);
	}
	cout<<"\nlist:";
	printlist(list);
	return 0;
}
