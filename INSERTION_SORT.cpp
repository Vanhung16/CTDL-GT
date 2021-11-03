#include <iostream>
#include <stdlib.h>

using namespace std;
void xuat(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<"\t";
	}
}
void INSERTION_SORT(int a[], int n){
	for(int i = 1 ; i < n ; i++){
		int t = a[i];
		int j = i -1 ;
		while(a[j] > t && j > -1){
			a[j+1] = a[j];
			j = j - 1;
			
		}
		a[j+1] = t;
	}
}
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		a[i] = rand()%100 + 1;
	}
	xuat(a,n);
	cout<<endl;
	INSERTION_SORT(a,n);
	xuat(a,n);
}
