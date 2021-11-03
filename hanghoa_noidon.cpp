#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
struct hanghoa{
	int mahh;
	char tenhh[15];
	char tennsx[15];
	int namsx;
};
struct Node{
	hanghoa infor;
	Node *next;
};
typedef Node *tro;
void nhap(hanghoa &a){
	cout<<"Nhap ma hang hoa: ";			cin>>a.mahh;
	cout<<"Nhap ten hang hoa: ";		fflush(stdin);		gets(a.tenhh);
	cout<<"Nhap ten nha san xuat: ";	fflush(stdin);		gets(a.tennsx);
	cout<<"Nhap nam san xuat: ";		cin>>a.namsx;
}
void xuat(hanghoa a){
	cout<<setw(20)<<left<<endl<<a.mahh;
	cout<<setw(20)<<left<<a.tenhh;
	cout<<setw(20)<<left<<a.tennsx;
	cout<<setw(20)<<left<<a.namsx;
}
void create(tro &l){
	l = NULL;
}
int empty(tro &l){
	return(l == NULL);
}
void addlast(tro &l, hanghoa a){
	tro q = l, p = new Node;
	p->infor = a;
	p->next = NULL;
	if(empty(l)){
		l = p;
	}
	else{
		while(q->next != NULL){
			q = q->next;
		}
		q->next = p;
	}
}
void nhapds(tro &l){
	int n;
	cout<<"Nhap so hang hoa: ";		cin>>n;
	int i = 0;
	while(i < n){
		hanghoa a;
		nhap(a);
		addlast(l,a);
		i++;
	}
}
void xuatds(tro l){
	tro q = l;
	cout<<setw(20)<<left<<"ma hh";
	cout<<setw(20)<<left<<"ten hh";
	cout<<setw(20)<<left<<"ten nsx";
	cout<<setw(20)<<left<<"nam sx";
	while(q!=NULL){
		xuat(q->infor);
		q= q->next;
		
	}
}
void search(tro l){
	tro q = l;
	cout<<setw(20)<<left<<"ma hh";
	cout<<setw(20)<<left<<"ten hh";
	cout<<setw(20)<<left<<"ten nsx";
	cout<<setw(20)<<left<<"nam sx";
	while(q != NULL){
		if(strcmp(q->infor.tennsx,"Sam Sung") == 0)
			xuat(q->infor);
		q = q->next;
			
	}
}
void removedat(tro &l, int k){
	tro q = l;
	for(int i = 0 ; i < k -1 ; i++){
		q = q->next;
	}
	
}
int main(){
	tro l;
	create(l);
	nhapds(l);
	cout<<"=================danh sach cac hang hoa================="<<endl;
	xuatds(l);
	cout<<"=================danh sach nhan san xuat SS================="<<endl;
	search(l);
	
	return 0;
}
