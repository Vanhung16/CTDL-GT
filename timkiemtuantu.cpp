#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
int search(int a[], int n, int k){
	for(int i = 0 ; i < n ; i++){
		if(a[i]==k)
		return i;
	}
	return -1;
}
int search2(int a[], int n, int k){
	int i = 0;
	a[n]=k;
	while(a[i] != k){
		i++;
	}
	if(i == n){
		return -1;
	
	}
	else{
		return i;
	}
}
int binary_search(int a[], int left, int right, int k){
	if(left <= right){
	int mid = (left + right)/2;
	if(a[mid] == k){
		return mid;
	}
	if( a[mid] > k){
		return binary_search(a,left,mid-1,k);
	}
	if(a[mid] < k){
		return binary_search(a,mid+1,right,k);
	}
}
	return -1;
}
int main(){
	int n;
//	cin>>n;
	int a[100];
	int b[] = {1,2,3,4,5,6,7};
//	for(int i = 0 ; i < n ; i++){
//		cin>>a[i];
//	}
//	cout<<"vi tri:"<<search2(a,n,14)<<endl;
	cout<<"vi tri:"<<binary_search(b,0,6,9);
	
	return 0;
}
