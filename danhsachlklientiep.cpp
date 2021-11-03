
#include <bits/stdc++.h>
using namespace std;
#define Max 10

struct canbo{
	int macb;
	char hoten[30];
	int tuoi;
	int luong;
};
struct List{
	int count;
	canbo e[Max];
};
canbo taocb(int ma,char *ht,int t,int l){
	canbo a;
	a.macb = ma;
	strcpy(a.hoten,ht);
	a.tuoi = t;
	a.luong = l;
	return a;
}
void create(List &L)
{
	L.count = -1;
}
int empty(List l)
{
	return (l.count == -1);
}
int full(List l){
	return (l.count == Max -1);
}


int add(List &l, canbo a){
	if(full(l)){
		return 0;
	}
	else{
		l.count ++;
		l.e[l.count] = a;
		return 1;
	}
}
void input(List &l){
	add(l,taocb(1001,"tran van thanh",19,1000));
	add(l,taocb(456,"Nguyen Thi Huong",20,10000));
	add(l,taocb(1003,"Nguyen Van Binh",29,1000));
	add(l,taocb(1004,"Bui Thi Hong",21,10200));
	add(l,taocb(1005,"Duong Van Giang",12,13000));

}
void xuattt(canbo a){
	cout<<fixed;
	cout<<setw(10)<<left<<endl<<a.macb;
	cout<<setw(20)<<left<<a.hoten;
	cout<<setw(15)<<left<<a.tuoi;
	cout<<setw(15)<<left<<a.luong;
}
void showlist(List l){
	cout<<fixed;
	cout<<setw(10)<<left<<"Ma cb";	
	cout<<setw(20)<<left<<"Ho ten";
	cout<<setw(15)<<left<<"Tuoi";
	cout<<setw(15)<<left<<"Luong";
	for(int i = 0 ; i <= l.count; i++){
		xuattt(l.e[i]);
	}
}
void removed(List &l){
	int vitri = 0;
	for(int i = 0 ; i <= l.count ; i++){
		if(l.e[i].macb == 456 )
		 vitri = i; 
	}
	for(int i = vitri ; i <= l.count ; i++){
		l.e[i] = l.e[i + 1];
	}
	l.count--;	
}
void display(List l){
	cout<<fixed;
	cout<<setw(10)<<left<<"Ma cb";	
	cout<<setw(20)<<left<<"Ho ten";
	cout<<setw(15)<<left<<"Tuoi";
	cout<<setw(15)<<left<<"Luong";
	for( int i = 0 ; i <= l.count ; i++){
		if(l.e[i].tuoi < 40){
			xuattt(l.e[i]);
		}
	}
}		
int main(){
	List l;
	create(l);
	input(l);
	cout<<"================== DANH SACH CAN BO ================== "<<endl;
	showlist(l);
	removed(l);
	cout<<endl<<"================== XOA CAN BO CO MA 456 ================== "<<endl;
	showlist(l);
	cout<<endl<<"================== HIEN THI NHUNG CAN BO DUOI 40 TUOI ================== "<<endl;
	display(l);
	return 0;
}
