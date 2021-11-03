#include <iostream>

using namespace std;
void buble_sort(int a[], int n)
{
	for(int i = 1 ; i < n ;i++){
		for(int j = 0 ; j < n - i ; j++){
			if(a[j] > a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
float binary_search(int a[], int left, int right,float k){

	if(left <= right){
	int mid = (left+right)/2;
	if(k < a[mid]){
		return binary_search(a,left,mid-1,k);
	}
	if(k > a[mid]){
		return binary_search(a,mid+1,right,k);
	}	
	if(k == a[mid]){
		return mid;
	}
	}
	return -1;
}
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
	buble_sort(a,n);
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<"\t";
	}
	float vt = binary_search(a,0,n-1,9.2);
	if(vt != -1 ){
		cout<<"tim thay so "<<9.2<<" 
		o vi tri "<<vt<<" trong day"<<endl;
	}else{
		cout<<"khong tim thay so "<<9.2<<" trong day"<<endl;
	}
	return 0;
}



