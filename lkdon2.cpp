#include <iostream>

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
 
 void create(TRO &L){
 	L = NULL;
 }
 int empty(TRO &L){
 	return L == NULL;
 }
 void input(sinhvien &X){
 	cout<<"nhap ma sinh vien: ";		gets(X.masv);
 	cout<<"nhap ho ten: ";				gets(X.hoten);
 	cout<<"nhap nam sinh";				cin>>X.namsinh;
 	cout<<"nhap diem tong ket: ";		cin>>X.masv;
 }
 void output(sinhvien X){
 	cout<<"ma sinh vien: "<<X.masv<<endl;
 	cout<<"ho ten: "<<X.hoten<<endl;
 	cout<<"nam sinh: "<<X.namsinh<<endl;
 	cout<<"diem tong ket: "<<X.diemtk;
 }
 void output_list(TRO L){

 	while(L != NULL){
 		output(L->infor); 
 		L = L->next;
	 }
 }
 void addhead(TRO &L, sinhvien X){
 	TRO P = new node;
 	P->infor = X;
 	P->next = L;
 	L = P;
 }
 int main(){
 	TRO L;
 	sinhvien X;
 	create(L);
 	input(X);
 	addhead(L,X);
 	addhead(L,X);
 	output_list(L);
 }
