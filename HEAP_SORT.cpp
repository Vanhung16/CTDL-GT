#include <iostream>
#include <stdlib.h>

using namespace std;
void printArray(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<"\t";
	}
}
void HEAPIFY(int a[], int n, int i){
	int largest = i;//larget laf goc
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	//neu nut con trai lon hon nut goc thi nut trai la goc
	if(left < n && a[left] > a[largest])
	{
		largest = left;
	}
	//neu nut con phai lon hon goc thi doi cho but phai voi goc
	if(right < n && a[right] > a[largest])
	{
		largest = right;
	}
	//neu goc khong phai lon nhat thi 
	if(largest != i){
		swap(a[i], a[largest]);
		HEAPIFY(a, n, largest);
	}
}
void HEAP_SORT(int a[], int n){
	//tao mot dong sap xep lai mang
	for(int i = n/2 -  1; i >= 0 ; i--){
		HEAPIFY(a,n,i);
	}
	//trich xuat tung phan tu tu heap
	for(int i = n - 1 ; i >= 0 ; i--){
		//di chuyen goc ve cuoi
		swap(a[0], a[i]);
		//goi lai ham heapifi
		HEAPIFY(a,i,0);
	}
}
int main(){
	int a[100],n;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		a[i] = rand()%50 + 1;
	}
	printArray(a,n);
	cout<<endl;
	HEAP_SORT(a,n);
	printArray(a,n);
}
