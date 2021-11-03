#include <iostream>
#include <stdlib.h>

using namespace std;
void xuat(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<"\t";
	}
}
void quick_sort(int a[], int left, int right){
	if(left < right){
		int i = left;
		int j = right;
		int k = (left+right)/2;
		int t = a[k];
		while(i <= j){
			while(a[i]<t)
			i = i + 1;
			while(a[i]>t)
			j = j - 1;
			if(i <= j){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				i++;
				j--;
			}
		}
		quick_sort(a,left,j);
		quick_sort(a,i,right);
	}
	
}
void patation(int a[], int left, int right){
	
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
	quick_sort(a,0,n-1);
	xuat(a,n);
	return 0;
}
