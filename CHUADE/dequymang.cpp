#include <iostream>

using namespace std;

void nhapds(int a[], int n){

	for(int i = 0 ; i < n ; i++){
		cin>>a[i];
	}
}
void xuatds(int a[], int n){
	for(int i = 0 ; i <  n ; i++){
		cout<<a[i]<<"\t";
	}
}

int dequy(int a[], int n, int x){
	if( n > 0){
		if(a[n] != x )
			return 0 + dequy(a,n-1,x);
		else
			return 1 + dequy(a,n-1,x);		
	}
	else
		if(n == 0)
			return 0;
}
int main(){
	int a[100];
	int n;
	cout<<"Nhap so phan tu: "; cin>>n;
	nhapds(a,n);
	xuatds(a,n);
	cout<<"so : "<<dequy(a,n,3);
	return 0;
}
