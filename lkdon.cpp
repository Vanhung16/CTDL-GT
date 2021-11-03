#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
struct sinhvien{
	char masv[10];
	char hoten[10];
	int namsinh;
	float diemtk;
};
struct node{
	sinhvien infor;
	node *next;
}typedef *TRO;

 
 void creat(TRO &L){
 	L = NULL;
 }
 int empty(TRO L){
 	return L==NULL;
 }
 void input(sinhvien &X){
 	cout<<"\nNhap masv: ";				gets(X.masv);
 	cout<<"\nNhap hoten: ";				gets(X.hoten);
 	cout<<"\nNhap nam sinh: ";			cin>>X.namsinh;
 	cout<<"\nNhap diem tong ket: ";		cin>>X.diemtk;
 }
 //tao moi
 void input_list(TRO &L){
 	TRO  Q; int n;int i = 0;
 	TRO P = new node;
 	sinhvien *X = new sinhvien[n];
 	creat(L);
 	while(i < n){
 		input(X);
 		P -> infor = X; P->next = NULL;
 		if(L==NULL) L = P;
 		else Q->next = P;
 		Q = P;	
 		i++;
	 }
 }
 void tieude(){
 	cout<<setw(20)<<"ma sinh vien";
 	cout<<setw(15)<<"ho ten";
 	cout<<setw(15)<<"nam sinh";
 	cout<<setw(20)<<"diem tong ket";
 }
  void output(sinhvien X){
 	cout<<setw(20)<<left<<endl<<X.masv;
 	cout<<setw(15)<<left<<X.hoten;
 	cout<<setw(15)<<left<<X.namsinh;
 	cout<<setw(20)<<left<<X.diemtk;
 }
 void duyet(TRO L){
 	cout<<endl;
 	tieude();
 	while(L != NULL){
 		output(L->infor); 
 		L = L->next;
 		cout<<endl;
	 }
 }
void add_head(TRO L, sinhvien X){
	TRO P = new node;
	P->infor = X;
	P->next = L;
	 L = P;
}
int main(){
	TRO L;
	sinhvien X;
	input_list(L);
	duyet(L);
	input(X);
	add_head(L,X);
	duyet(L);
	return 0;
}
