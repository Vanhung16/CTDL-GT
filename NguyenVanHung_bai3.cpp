#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
struct hocsinh{
	char hoten[15];
	char gioitinh[15];
	int namsinh;
	float diemtk;
	
};

void nhap(hocsinh a[], int n){
	for(int i = 0 ; i < n ; i++){
		cout<<"\nNhap thong tin sinh vien thu "<<i+1<<endl;
		cout<<"Nhap ho ten: ";			fflush(stdin);		gets(a[i].hoten);
		cout<<"Nhap gioi tinh: ";		fflush(stdin);		gets(a[i].gioitinh);
		cout<<"Nhap nam sinh: ";							cin>>a[i].namsinh;
		cout<<"Nhap diem tong ket: ";						cin>>a[i].diemtk;
	}
}
void bubble_sort(hocsinh a[], int n){
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = i+1 ; j < n ; j++){
			if(a[i].diemtk < a[j].diemtk){
				swap(a[i],a[j]);
			}
		}
	}
}
int sequential_search(hocsinh a[], int n, hocsinh b){
	a[n] = b;
	int i=0;
	while( a[i].hoten != b.hoten && a[i].diemtk != b.diemtk){
		i++;
	}
	if(i == n){
		return -1;
	}
	if(i != n ){
		return i;
	}
}
int binary_search(hocsinh a[], int left, int right, hocsinh k){
	if(left <= right){
		int mid =(left +right)/2;
		if(a[mid].diemtk == k.diemtk){
			return mid;
		}
		if(a[mid].diemtk > k.diemtk){
			return binary_search(a,mid+1,right,k);
		}
		if(a[mid].diemtk < k.diemtk){
			return binary_search(a,left,mid-1,k);
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"\nNhap so sinh vien can nhap: ";		cin>>n;
	hocsinh a[100];
	nhap(a,n);
	hocsinh b;
	cout<<"\n-----------------------------"<<endl;
	cout<<"Nhap thong tin sinh vien can tim"<<endl;
		cout<<"Nhap ho ten: ";			fflush(stdin);		gets(b.hoten);
		cout<<"Nhap gioi tinh: ";		fflush(stdin);		gets(b.gioitinh);
		cout<<"Nhap nam sinh: ";							cin>>b.namsinh;
		cout<<"Nhap diem tong ket: ";						cin>>b.diemtk;
	cout<<"\n-----------------------------"<<endl;		
		cout<<"Thong tin sinh vien"<<endl;
	for(int i = 0 ; i < n ; i++){
		cout<<"ho ten: "<<a[i].hoten<<endl;
		cout<<"gioi tinh:"<<a[i].gioitinh<<endl;
		cout<<"nam sinh:"<<a[i].namsinh<<endl;
		cout<<"diem tong ket:"<<a[i].diemtk<<endl;
		cout<<endl;
	}
	cout<<"tim kiem tuan tu: "<<sequential_search(a,n,b)<<endl;
	bubble_sort(a,n);
	cout<<"thong tin sinh vien sau khi sort"<<endl;
	for(int i = 0 ; i < n ; i++){
		cout<<"ho ten: "<<a[i].hoten<<endl;
		cout<<"\ngioi tinh:"<<a[i].gioitinh<<endl;
		cout<<"\nnam sinh:"<<a[i].namsinh<<endl;
		cout<<"\ndiem tong ket:"<<a[i].diemtk;
		cout<<endl;
	}
	cout<<"tim kiem nhi phan:"<<binary_search(a,0,n-1,b);
	
	return 0;
}
