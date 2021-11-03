#include <iostream>
#include <stdlib.h>
using namespace std;

void print(int a[], int n){
	for(int i = 0 ; i < n ; i++)
	cout<<a[i]<<"\t";
}
void bubblesort(int a[], int n){
	for(int i = 0 ; i < n ;i++){
		for(int j=0 ; j < n - i; j++){
			if(a[j] < a[j+1])
			{
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
void selectsort(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		int vitri = i;
		for(int j = i +1 ; j < n ; j++){
			if(a[vitri]<a[j])
			vitri = j;
		}
		if(vitri != i)
		swap(a[i],a[vitri]);
	}
}
void insertsort(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		int t = a[i];
		int j= i+1;
		while(a[j] >= t && j>=0)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = t;
	}
}
int main(){
	int a[100];
	for(int i = 0 ; i < 9 ; i++){
	cin>>a[i];
	cout<<endl;
	}
	print(a,9);
	bubblesort(a,9); 	cout<<endl;
	print(a,9);
	selectsort(a,9); 	cout<<endl;
	print(a,9);
	insertsort(a,9);	cout<<endl;
	print(a,9);
	return 0;
}
