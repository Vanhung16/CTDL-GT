# include <iostream>

using namespace std;
void sapxepchon(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		int index = i;
		for(int j = i ; j < n ; j++){
			if(a[index] < a[j]){
				index = j;
			}
		}
		if(index != i){
			int temp = a[index];
			a[index] = a[i];
			a[i] = temp;
		}
	}
}
int main(){
	int a[10];
	int n;
	cin >>n;
	for(int i = 0 ; i < n ; i++){
		cin>> a[i];
	}
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<"\t";
	}
	sapxepchon(a,n);
	cout<<"ds sau khi sap xep"<<endl;
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<"\t";
	}
	return 0;
}
