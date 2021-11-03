#include <iostream>

using namespace std;

int B(int a, int b){
	
	if(b == 0)
		return b;
	else
		return B(b,a%b);
}

int main(){
	int a,b,c;
	cin>>a>>b;
	cout<< B(a,b);
	return 0;
}
