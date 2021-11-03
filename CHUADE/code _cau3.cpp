#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
struct canbo{
	int macb;
	char hoten[30];
	char gioitinh[10];
	int namsinh;
};

struct Node{
	canbo infor;
	Node *next;
};
typedef Node *TRO;

void create(TRO &L){
	L = NULL;
}
int empty(TRO &L){
	return(L == NULL);
}
void nhaptt(canbo &a){
	cout<<"Nhap ma can bo: ";				cin>>a.macb;
	cout<<"Nhap ho ten: ";			fflush(stdin);		gets(a.hoten);
	cout<<"Nhap gioi tinh: ";		fflush(stdin);		gets(a.gioitinh);
	cout<<"Nhap nam sinh: ";		cin>>a.namsinh;
}
void xuattt(canbo a){
	cout<<setw(10)<<left<<endl<<a.macb;
	cout<<setw(30)<<left<<a.hoten;
	cout<<setw(30)<<left<<a.gioitinh;
	cout<<setw(30)<<left<<a.namsinh;
}
void addlast(TRO &L, canbo a){
	TRO Q = L,P = new Node;
	P->infor = a;
	P->next = NULL;
	if(L == NULL){
		L = P;
	}else{
	while(Q->next != NULL){
		Q =  Q -> next;
	}
	Q->next = P;
	}
}
void nhapds(TRO &L){
	int n;
	cout<<"Nhap danh sach can bo: ";		cin>>n;
	int i = 0;
	while(i < n){
	canbo a;
	nhaptt(a);
	addlast(L,a);
	i++;
	}
}

void xuatds(TRO L){
	TRO Q = L;
	cout<<"==============DANH SACH CAN BO =============="<<endl;
	cout<<setw(10)<<left<<"ma cb";
	cout<<setw(30)<<left<<"ho ten";
	cout<<setw(30)<<left<<"gioi tinh";
	cout<<setw(30)<<left<<"nam sinh";
	while(Q != NULL){
		xuattt(Q->infor);
		Q = Q->next;
		cout<<endl;
	}
}
void hienthicbn(TRO L){
	TRO Q = L;
	cout<<"==============DANH SACH CAN BO NAM=============="<<endl;
	cout<<setw(10)<<left<<"ma cb";
	cout<<setw(30)<<left<<"ho ten";
	cout<<setw(30)<<left<<"gioi tinh";
	cout<<setw(30)<<left<<"nam sinh";
	while(Q != NULL){
		if(strcmp(Q->infor.gioitinh,"Nam") == 0)
		
			xuattt(Q->infor);
			Q = Q->next;
			cout<<endl;
		
	}
}
void removedat(TRO &L, int k){
	TRO Q = L;
	for(int i = 0; i < k - 1 ; i++ ){
		Q = Q -> next;
	}
	TRO P = Q;
	Q->next = P->next;
	P -> next = NULL;
}
void xoavitri5(TRO &L ){
	int vitri;
	cout<<"Nhap vi tri can xoa: ";		cin>>vitri;
	removedat(L,vitri);
}
void addhead(TRO &L,canbo a){
	TRO P = new Node;
	P->infor = a;
	P->next = L;
	L = P;
}
void addat(TRO &L,canbo a, int k){
	TRO Q = L,P = new Node;
	P->infor = a;
	for(int i = 0 ; i < k - 1 ; i++){
		Q = Q -> next;
	}
	P->next = Q->next;
	Q->next = P;
}
void chen(TRO &L){
	TRO Q = L;
	int vitri = 0;
	while(Q != NULL){
		vitri++;
		if(Q->infor.macb == 100122)
		break;
	}
	canbo a;
	nhaptt(a);
	addat(L,a,vitri);
}
int main(){
	TRO L;
	create(L);
	nhapds(L);
	xuatds(L);
	hienthicbn(L);
	cout<<endl;
	xoavitri5(L);
	xuatds(L);
	cout<<endl;
	chen(L);
	xuatds(L);
	return 0;
}
