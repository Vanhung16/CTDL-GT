#include <iostream>
#include <string.h>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

struct Cuahang{
	char tench[15];
	char tencch[15];
	int doanhthu;
	int soluongnv;
};

struct Node{
	Cuahang infor;
	Node *next;
};

typedef Node* TRO;

void create(TRO &L)
{
	L = NULL;
}

int empty(TRO &l)
{
	return(l == NULL);
}

void nhaptt(Cuahang &a){
	cout<<"Nhap ten cua hang: ";		fflush(stdin); 	gets(a.tench);		cout<<endl;
	cout<<"Nhap ten chu cua hang: ";	fflush(stdin);  gets(a.tencch);		cout<<endl;
	cout<<"Nhap doanh thu: ";			cin>>a.doanhthu;	cout<<endl;
	cout<<"Nhap so luong nv: ";			cin>>a.soluongnv;	
}
void xuattt(Cuahang a){
	cout<<setw(20)<<left<<endl<<a.tench;
	cout<<setw(20)<<left<<a.tencch;
	cout<<setw(20)<<left<<a.doanhthu;
	cout<<setw(10)<<left<<a.soluongnv;
}
void addlast(TRO &L, Cuahang a){
	TRO Q = L, P = new Node;
	P -> infor = a;
	P-> next = NULL;
	if(empty(L))
		L = P;
	else{
		while(Q->next != NULL)
			Q = Q->next;
		Q->next = P;
	} 	
}
void nhapds(TRO &L){
	int n;
	cout<<"Nhap so cua hang can nhap: ";		cin>>n;
	int i = 0;
	while(i < n){
		cout<<"Nhap thong tin cua hang thu "<<i+1<<endl;
		Cuahang a;
		nhaptt(a);
		addlast(L,a);
		i++;
	}
}
void xuatds(TRO L){
	TRO P = L;
	cout<<"==============DANH SACH=============="<<endl;
	cout<<setw(20)<<left<<"ten ch";
	cout<<setw(20)<<left<<"ten c ch";
	cout<<setw(20)<<left<<"doanh thu";
	cout<<setw(10)<<left<<"so luong nv";
	while( P != NULL){
		xuattt(P->infor);
		P = P -> next;
		cout<<endl;
	}
}
void display(TRO L){
	TRO Q = L;
	while(Q != NULL){
		if(Q->infor.doanhthu > 100){
			xuattt(Q->infor);
		}
		Q=Q->next;
	}
}
void addat(TRO &L, Cuahang a, int k){
	TRO Q = L, P = new Node;
	P->infor = a;
	for(int i = 0 ; i < k -1; i++){
		Q= Q->next;
	}
	P->next = Q -> next;
	Q->next = P;
}
void addhead(TRO &L, Cuahang a){
	TRO P = new Node;
	P->infor = a;
	P->next = L;
	L = P;
}
void chenvt5(TRO &L,Cuahang a){
	cout<<"Nhap thong tin cua hang thu 5"<<endl;
	nhaptt(a);
	addat(L,a,5);
}
void removedat(TRO &L, int k){
	TRO Q = L;
	for(int i = 0 ; i < k - 1; i++){
		Q = Q -> next;
	}
	TRO P = Q;
	Q->next = P->next;
	P->next = NULL;
}
//í 3
int main(){
	TRO L;
	create(L);
	nhapds(L);
	xuatds(L);
//	cout<<"==============DANH SACH CUA HANG DOANH THU LON HON 100TR=============="<<endl;
//	cout<<setw(20)<<left<<"ten ch";
//	cout<<setw(20)<<left<<"ten c ch";
//	cout<<setw(20)<<left<<"doanh thu";
//	cout<<setw(10)<<left<<"so luong nv";
//	display(L);
	cout<<endl;
	Cuahang a;
//	chenvt5(L,a);
//	xuatds(L);
//	cout<<endl;
	nhaptt(a);
	addhead(L,a);
	xuatds(L);
	return 0;
}
