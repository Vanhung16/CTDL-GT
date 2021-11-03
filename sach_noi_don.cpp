#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

struct sach{
	int masach;
	char tensach[15];
	char tentg[15];
	int namxb;
};

struct Node{
	sach infor;
	Node *next;
};
typedef Node *TRO;
void create(TRO &L){
	L = NULL;
}
int empty(TRO &L){
	return(L == NULL);
}
void addlast(TRO &L, sach a){
	TRO Q = L, P = new Node;
	P->infor = a;
	P->next = NULL;
	if(empty(L)){
		L = P;
	}else{
	while(Q->next != NULL){
		Q = Q->next;
	}
	Q->next = P;
	}
}
void nhaptt(sach &a){
	cout<<"Nhap ma sach: ";			cin>>a.masach;
	cout<<"Nhap ten sach: ";		fflush(stdin);		gets(a.tensach);
	cout<<"Nhap ten tac gia: ";		fflush(stdin);		gets(a.tentg);
	cout<<"Nhap nam xuat ban: ";	cin>>a.namxb;
}
void xuattt(sach a){
	cout<<setw(20)<<left<<endl<<a.masach;
	cout<<setw(20)<<left<<a.tensach;
	cout<<setw(20)<<left<<a.tentg;
	cout<<setw(20)<<left<<a.namxb;
}
void nhapds(TRO &L){
	int n;
	cout<<"Nhap so cuon sach: ";		cin>>n;
	int i = 0;
	while(i < n){
		sach a;
		nhaptt(a);
		addlast(L,a);
		i++;
	}
}
void xuatds(TRO L){
	TRO Q = L;

	cout<<setw(20)<<left<<"ma sach";
	cout<<setw(20)<<left<<"ten sach";
	cout<<setw(20)<<left<<"ten tg";
	cout<<setw(20)<<left<<"nam xb";
	while(Q!=NULL){
		xuattt(Q->infor);
		Q = Q -> next;
		cout<<endl;
	}
}
void search(TRO L){
	TRO Q  = L;

	cout<<setw(20)<<left<<"ma sach";
	cout<<setw(20)<<left<<"ten sach";
	cout<<setw(20)<<left<<"ten tg";
	cout<<setw(20)<<left<<"nam xb";
	while(Q!=NULL){
		if(strcmp(Q->infor.tentg,"Quach Tuan Ngoc")==0 )
			xuattt(Q->infor);
		Q = Q->next;
	}
}
int main(){
	TRO L;
	create(L);
	nhapds(L);
	cout<<"=======================Danh sach======================="<<endl;
	xuatds(L);
	cout<<endl;
	cout<<"=======================Danh sach tim kiem======================="<<endl;
	search(L);
	
	return 0;
}
