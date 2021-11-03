#include <iostream>

using namespace std;

long **d;
int C(int k, int n){
	
	if(k == 0 || k == n){
		d[k][n] = 1;
	}else if(d[k][n] < 0){
		d[k][n] = C(k,n-1) + C(k-1,n-1);
	}
	return d[k][n];
}

int main(){
	int k,n;
	cout<<"Nhap k: "; cin>>k;
	cout<<endl<<"Nhap n: "; cin>>n;
	d = new long[k+1]*;
	for (int i = 0 ; i < k+1 ; i++){
		d[i] = new *long[n+1];
	}
	 for(int i = 0;i<k+1,i++)
        for(int j = 0;j<n+1,j++)
            d[i][j] = -1;
	cout<<endl<<"To hop chap k cua n la: ";
	cout<<C(k,n);
	
	return 0;
}
