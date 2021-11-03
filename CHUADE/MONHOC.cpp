#include <iostream>
#include <string.h>
#include <stdio.h>
//A = 1 if n = 0
//A = 2*(n-1) if n>0
using namespace std;
struct monhoc{
	int mamh;
	char tenmh[15];
	int sotc;
};
struct Node{
	monhoc infor;
	Node *next;
};
typedef Node *TRO;

void create(TRO &l){
	l = NULL;
}

void nhaptt(monhoc &a){
	
	cout<<"Nhap ma mon hoc: ";		cin>>a.mamh;
	cout<<"Nhap ten mon hoc: ";		fflush(stdin);		gets(a.tenmh);
	cout<<"Nhap so tin chi: ";		cin>>a.sotc; 
}
void xuattt(monhoc a){
	cout<<endl<<"ma mon hoc: "<<a.mamh<<endl;
	cout<<"ten mon hoc: "<<a.tenmh<<endl;
	cout<<"so tin chi: "<<a.sotc<<endl;
}
void addhead(TRO &L, monhoc a){
	TRO P= new Node;
	P->infor = a;
	P->next = L;
	L = P;
}
void addlast(TRO &L, monhoc a){
	TRO P = new Node;
	TRO Q = L;
	P->infor = a;
	P->next = NULL;
	if(L == NULL){
		L = P;
	}else{
	while(Q != NULL){
		Q = Q->next;
	}
	Q->next = P;
	}
}
void addat(TRO &L, monhoc a, int k){
	TRO Q = L,P = new Node;
	P->infor = a;
	for(int i = 0 ; i < k - 1 ; i++){
		Q = Q->next;
	}
	P->next = Q->next;
	Q->next = P;
}
void hienthi(TRO L)
{
	TRO Q = L;
	while(Q != NULL){
		if(Q->infor.mamh == 123)
			xuattt(Q->infor);
		Q = Q->next;
	}
}
void nhapds(TRO &L){
	int n;
	cout<<"Nhap so mon hoc: ";		cin>>n;
	int i = 0;
	while (i < n){
//		cout<<"Nhap thong tin mon hoc thu "<<i+1<<endl;
		monhoc a;
		nhaptt(a);
		addlast(L,a);
		i++;
	}
}
void xuatds(TRO l){
	TRO Q = l;
	while(Q != NULL){
		xuattt(Q->infor);
		Q = Q ->next;
		cout<<endl;
	}
}
void them1dau(TRO &L, monhoc a){
	cout<<"Nhap thong tin mon hoc can chen: "<<endl;
	nhaptt(a);
	addhead(L,a);
	
}
int main(){
	TRO L;
	create(L);
	nhapds(L);
	xuatds(L);
//	monhoc a;
//	them1dau(L,a);
//	xuatds(L);
//	cout<<endl;
//	cout<<"thong tin mon hoc co ma 123"<<endl;
//	hienthi(L);
	return 0;
}
