#include <iostream>
using namespace std;
int fibonancial(int n){
	if( n == 0 )
		return 4;
	else if (n == 1)
		return 3;
		else
			return fibonancial(n-1)-fibonancial(n-2)-1;
}
int main(){
	int n;
	cin>>n;
	cout<<fibonancial(n);
	return 0;
}
