#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct monhoc{
	int mamh;
	char tenmh[30];
	int sotc;
};
struct Node{
	monhoc infor;
	Node *next;
};
typedef Node *TRO;
void create(TRO &L){
	L = NULL;
}
void nhaptt(monhoc &a){
	cout<<"Nhap ma mon hoc: ";		cin>>a.mamh;
	cout<<"Nhap ten mon hoc: ";		fflush(stdin);		gets(a.tenmh);
	cout<<"Nhap so tin chi: ";		cin>>a.sotc;
}
void xuattt(monhoc a){
	cout<<"Ma mon hoc: "<<a.mamh<<endl;
	cout<<"Ten mon hoc: "<<a.tenmh<<endl;
	cout<<"So tin chi: "<<a.sotc<<endl;
}
void addlast(TRO &L, monhoc a){
	TRO Q = L, P = new Node;
	P->infor = a;
	P->next = NULL;
	if(L == NULL){
		L = P;
	}
	else{
		while(Q->next != NULL){
			Q = Q->next;
		}
		Q->next = P;
	}
}
void addhead(TRO &L,monhoc a){
	TRO P = new Node;
	P->infor = a;
	P->next = L;
	L = P;
}
void addat(TRO &L,monhoc a,int vitri){
	TRO Q = L,P = new Node;
	P -> infor = a;
	for(int i = 0 ; i < vitri - 1 ; i++)
	{
		Q = Q->next;
	}
	P->next = Q->next;
	Q->next = P;
}
void nhapds(TRO &L){
	int n;
	cout<<"Nhap so mon hoc: ";		cin>>n;
	int i = 0;
	while(i < n){
		monhoc a;
		nhaptt(a);
		addlast(L,a);
		i++;
	}
}
void xuatds(TRO L){
	TRO Q = L;
	while(Q != NULL){
		xuattt(Q->infor);
		Q = Q->next;
		cout<<endl;
	}
}
void them1dau(TRO &L,monhoc a){
	cout<<"Nhap thong tin mon hoc can them"<<endl;
	nhaptt(a);
	addhead(L,a);
}
void thembatki(TRO &L,monhoc a,int vitri){
	TRO Q = L, P = new Node;
	cout<<"Nhap thong tin mon hoc can chen"<<endl;
	nhaptt(a);
	P->infor = a;
	for(int i = 0 ; i < vitri - 1 ; i++){
		Q = Q->next;
	}
	P->next = Q->next;
	Q->next = P;
}
void hienthitt(TRO L){
	TRO Q = L;
	while(Q != NULL){
		if(Q->infor.mamh == 123)
			xuattt(Q->infor);
		Q = Q->next;
	}
}
int main(){
	TRO L;
	create(L);
	nhapds(L);
	cout<<"Thong tin cac mon hoc"<<endl<<endl;
	xuatds(L);
	monhoc a;
	them1dau(L,a);
	cout<<endl;
	xuatds(L);
	cout<<endl<<"thong tin mon hoc co ma la 123"<<endl;
	hienthitt(L);
	int vitri;
	cout<<"nhap vi tri can chen: ";		cin>>vitri;
	monhoc b;
	thembatki(L,b,vitri);	cout<<endl;
	xuatds(L);
	return 0;
}
