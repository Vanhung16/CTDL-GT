#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
struct sach{
	int masach;
	char tensach[30];
	char tentg[30];
	int namxb;
};

struct Node{
	sach infor;
	Node *next;
};
typedef Node *TRO;
void nhaptt(sach &a){
	cout<<"Nhap ma sach: ";			cin>>a.masach;
	cout<<"Nhap ten sach: ";		fflush(stdin);		gets(a.tensach);
	cout<<"Nhap ten tac gia: ";		fflush(stdin);		gets(a.tentg);
	cout<<"Nhap nam xuat ban: ";	cin>>a.namxb;
}
void xuattt(sach a){
	cout<<"Ma sach: "<<a.masach<<endl;
	cout<<"Ten sach: "<<a.tensach<<endl;
	cout<<"Ten tac gia: "<<a.tentg<<endl;
	cout<<"Nam xuat ban: "<<a.namxb<<endl;
}
void create(TRO &L){
	L = NULL;
}
void addlast(TRO &L, sach a){
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
void nhapds(TRO &L){
	int n;
//	do{
//		cout<<"Nhap so quyen sach: ";		cin>>n;
//	}while(n<7);
	cout<<"Nhap so quyen sach: ";		cin>>n;
	int i = 0;
	while(i < n){
		sach a;
		cout<<"Nhap thong tin quyen sach thu "<<i+1<<endl;
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
	}
}
void hienthi(TRO L){
	TRO Q = L;
	while(Q != NULL){
		if(strcmp(Q->infor.tentg , "Quach Tuan Ngoc") == 0)
			xuattt(Q->infor);
		Q = Q->next;
	}
}
int main(){
	TRO L;
	create(L);
	nhapds(L);
	cout<<endl<<"Thong tin cac quyen sach"<<endl;
	xuatds(L);
	cout<<"Thong tin cac quyen sach cua tac gia Quach Tuan Ngoc la"<<endl<<endl;
	hienthi(L);
	return 0;
}
