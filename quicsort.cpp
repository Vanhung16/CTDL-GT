#include <iostream>
#include <stdlib.h>
using namespace std;
void in(int a[], int n){
		for(int i = 0 ; i < n; i++){
				cout<<a[i]<<"\t";
				}
}
void quicksort(int a[], int left, int right){
	int i = left;
	int j = right;
	int k = (left+right)/2;
	int t= a[k];
	if(left < right){
		do{
			while(a[i]<t) {
				i++;
				cout<<endl<<"i = "<<i<<endl;
				cout<<"t = "<<t<<endl;
			}
			while(a[j]>t) {
				j--;
				cout<<endl<<"j = "<<j<<endl;
				cout<<"t = "<<t<<endl;
			}
			if(i <= j){
				swap(a[i],a[j]);
				i++;
				j--;
				cout<<endl<<"i = "<<i<<endl;
				cout<<"j = "<<j<<endl;
				cout<<"t = "<<t<<endl;
				in(a,right);
			}
		}while(i <= j);
		quicksort(a,left,j);
		cout<<endl;
		in(a,right);
		quicksort(a,i,right);
		cout<<endl;
		in(a,right);
				cout<<endl;
	}
}

int main(){
	int a[100];
	int n;
	cout<<"nhap n=";		cin>>n;
	for(int i = 0 ; i < n ; i++){
		a[i] = rand()%100 +1;
		
	}
	for(int i = 0 ; i < n; i++){
		cout<<a[i]<<"\t";
	}
	quicksort(a,0,n);
	cout<<endl<<"ket qua"<<endl;
	in(a,n);
	return 0;
}
