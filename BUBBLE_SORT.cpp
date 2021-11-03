#include <iostream>
#include <stdlib.h>
using namespace std;
void xuat(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<"\t";
	}
}
void BUBBLE_SORT(int a[], int n){
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = i+1 ; j < n ; j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		a[i] = rand()%100 +1;
	}
	xuat(a,n);
	cout<<endl;
	BUBBLE_SORT(a,n);
	xuat(a,n);
}
