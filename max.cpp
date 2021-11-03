#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
	int a[100];
	int n=7;
	for(int i = 0 ; i < n; i++){
		a[i] = rand()%50 +1;
	}
	int max = a[0];
	int dem = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i]>max)
		{
			dem = 1; 
			max = a[i];
		}
		else if(a[i] == max)
		{
			dem++;
		}
	}
	for(int i = 0 ; i < n ; i++){
		cout<<a[i]<<"\t";
	}
	cout<<"Max la: "<<max<<"so so max la: "<<dem;
	return 0;
}
