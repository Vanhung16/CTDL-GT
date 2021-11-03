#include <iostream>

using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *CreateNode(int x){
	Node *node = new Node;
	node-> data = x;
	node -> next = NULL;
	return node;
}

Node *addElement(Node *list, int x){
	Node *node = CreateNode(x);
	list -> next = node;
	return node;
}
void PrintList(Node *list){
	Node *p = list;
	while(p->next != NULL){
		cout<<p->data<<"\t";
		p = p -> next;
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
	p->next = node;
//	p = node;
	return list;
}
void addhead(Node *list, int x){
	Node *node = new Node;
	node ->data = x;
	node -> next = list;
	list = node;
//	return list;
}
Node *addAt(Node *list, int x, int k){
	Node *node = new Node;
	Node *p = list;
	node ->data = x;
	int i = 0;
	while(p->next != NULL){
		
		if(i==k){
			break;
		}
		i++;
		p = p ->next;
	}
	node -> next = p->next;
	p->next = node;
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
	PrintList(list);
	cout<<"\nadd tail: ";
	addtail(list,0);
	PrintList(list);
	addAt(list,7,0);
	cout<<endl;
	PrintList(list);
	return 0;
}
