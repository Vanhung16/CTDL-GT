//xin ch�o c�c b?n h�m nay m�nh s? l�m t�t 1 b�i nha
#include <iostream>
#include <stdlib.h>
using namespace std;
void insert_sort(int a[], int n){
	for(int i = 1 ; i < n ; i++){
		int tam = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > tam){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tam;
	}
}
int main(){
	int a[100];
	int n;
	cout<<"\nNhap n= ";		cin>>n;
	for(int i = 0 ; i < n ; i++){
		a[i] = rand()%100+1;
	}
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<"\t";
	}
	insert_sort(a,n);
	cout<<endl;
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<"\t";
	}
	return 0;
}
