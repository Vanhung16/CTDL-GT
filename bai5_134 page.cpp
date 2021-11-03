#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

struct Sinhvien{
	char Masv[10];
	char HoTen[15];
	int NamSinh;
	float Diemtk;
};
struct Node{
	Sinhvien info;
	Node *next;
};

void nhap(Sinhvien &x){
	cout<<"\nNhap Ma sinh vien: ";		fflush(stdin);		gets(x.Masv);
	cout<<"\nNhap Ho va Ten: ";			fflush(stdin);		gets(x.HoTen);
	cout<<"\nNhap nam sinh: ";								cin>>x.NamSinh;
	cout<<"\nNhap diem tong ket: ";							cin>>x.Diemtk;
}
void xuat(Sinhvien x){
	cout<<"Ma sv: "<<x.Masv;
	cout<<"\nHo va Ten: "<<x.HoTen;
	cout<<"\nNam sinh: "<<x.NamSinh;
	cout<<"\nDiem tk: "<<x.Diemtk;
}

typedef Node *TRO;

void khoitao(TRO &l){
	l = NULL;
}

void addhead(TRO &l, Sinhvien x){
	TRO p = new Node;
	p->info = x;
	p->next = l;
	l = p;
}
void addtail(TRO &l, Sinhvien x){
	TRO p = new Node;
	p->info = x;
	p->next = NULL;
	if(l == NULL){
		l = p;
	}
	else{
		Node *q = l;
		while(q->next != NULL){
			q = q->next;
		}
		q->next = p;
	}
}
void addAt(TRO &l, Sinhvien x, int k){
	Node *q = l;
	int i = 0;
	while(q != NULL){
		if (i == k)
		i++;
		break;
		q = q->next;
	}
	Node *p = new Node;
	p->info = x;
	p->next = q->next;
	q->next = p;
}
 
void removehead(TRO &l){
	if(l ==NULL){
		cout<<"khong co gi de xoa!"<<endl;
	}
	else{
	TRO p = l;
	l = p->next;
	delete p;
	}
}
void removetail(TRO &l){
	TRO p = l;
	if(l == NULL){
		cout<<"khong co gi de xoa!"<<endl;
	}
	else{
		while(p->next->next != NULL){
			p = p->next;
		}
		delete(p);
		p->next = NULL;
	}
}

void removeat(TRO &l, int k){
	
}
void nhapds(TRO &l){
	int n;
	cout<<"\nNhap so sinh vien can nhap: ";		cin>>n;
	int i = 0;
	while(i<n){
		cout<<"\nNhap thong tin sinh vien thu "<<i+1<<endl;
		Sinhvien sv;
		nhap(sv);
		addtail(l,sv);
		i++;
	}
}

void xuatds( TRO l){
	TRO p = l;
	while(p != NULL){
		cout<<"\nDANH SACH"<<endl;
		xuat(p->info);
		p = p->next;
		cout<<endl;
	}
}


int main(){
	TRO l;
	khoitao(l);
	nhapds(l);
	xuatds(l);
	cout<<"\nTHEM DAU\n";
	Sinhvien x;
	nhap(x);
	addhead(l,x);
	xuatds(l);
	cout<<"\nXOA DAU\n";
	removehead(l);
	xuatds(l);
	cout<<"\nXOA DUOI\n";
	removetail(l);
	xuatds(l);
	return 0;
}
