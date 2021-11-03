#include <iostream>
#include <stdlib.h>

using namespace std;
void select_sort(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		int index = i;
		for(int j = i+1 ; j < n ; j++){
			if(a[index] > a[j])//sap xep theo tang dan
				index = j;
		}
		if(index != i)
		swap(a[i],a[index]);
	}
}
void bubble_sort(int a[], int n){
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(a[i] < a[j])// sap xep theo chieu tang dan
			{
				swap(a[i],a[j]);
			}
		}
	}
}
void insert_sort(int a[], int n){
	for(int i = 1 ; i < n ; i++){
		int temp = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] >= temp){//sap xep chen tang dan
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1] = temp;
	}
}
void PrintArray(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<"\t";
	}
}
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		a[i] = rand() % 100 + 1;
	}
	PrintArray(a,n);
	select_sort(a,n);
	cout<<endl;
	PrintArray(a,n);
	cout<<endl;
	insert_sort(a,n);
	PrintArray(a,n);
	return 0;
}
