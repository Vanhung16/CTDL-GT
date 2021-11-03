#include <iostream>

using namespace std;
void print(int a[], int n){
	for(int i = 0 ; i < n ; i++){
	cout<<a[i]<<"\t";
	}
}
int partition(int a[], int left, int right){
	int X = a[left];
	int i = left + 1;
	int j = right;
	do{
		while(i <= j && a[i] > X) i++;
		while(i <= j && a[j] < X) j--;
		if(i <= j){
			int t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;j--;
		}
	}while(i <= j);
	int t = a[left];
		a[left] = a[j];
		a[j] = t;
	return j;
}
void quick_sort(int a[], int left, int right){
	if(left < right){
		int pivot = partition(a,left,right);
		quick_sort(a,left,pivot-1);
		quick_sort(a,pivot + 1,right);
	}
}
int main(){
//	int n;
//	cout<<"\nNhap n= ";		cin>>n;
	int a[9]={34,14,24,54,84,64,94,74,4};
//	for(int i = 0 ;i < n ; i++){
//		cin>>a[i];
//	}
	print(a,9);
	quick_sort(a,0,9-1);
	cout<<endl;
	print(a,9);
	return 0;
}
