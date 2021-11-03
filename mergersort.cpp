#include <iostream>
#include <stdlib.h>
using namespace std;
void merger(int a[], int left, int mid,int right){
	int n1 = mid - left + 1; //so phan tu mang trai
	int n2 = right -mid;//so phan tu mang phai
	//cap phat hai mang
	int *leftarr = new int [n1];
	int *rightarr = new int [n2];
	
	for(int i = 0 ; i < n1 ; i++){
		leftarr[i] = a[i];
	}
	for(int i = 0 ; i < n2 ; i++){
		rightarr[i] = a[mid + i];
	}
	int i = 0 , j = 0 , current = left;
	//tron
	while(i < n1 && j < n2){
		if(leftarr[i] <= rightarr[j])
			a[current ++] = rightarr[j++];
		
		else
			a[current ++] = leftarr[i++];
	}
	while(i < n1){
		a[current ++] = leftarr[i++];
	}
	while(j < n2){
		a[current ++] = rightarr[j++];
	}
	
	delete [] leftarr, rightarr;
}
void merger_sort(int a[], int left , int right){
	if(left < right){
		int mid = (left + right)/2;
		
		merger_sort(a,left,mid);
		merger_sort(a,mid+1,right);
		merger(a,left,mid,right);
	}
}
void print(int a[], int n){
	for(int i = 0 ; i < n ;i++){
		cout<<a[i]<<"\t";
	}
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i = 0 ; i < n ; i++){
		a[i] = rand()%100 +1;
	}
	print(a,n);
	merger_sort(a,0,n-1);
	cout<<endl;
	print(a,n);
	return 0;
}
