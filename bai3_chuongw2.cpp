#include <iostream>
#include <math.h>
using namespace std;

	
float F(float n){
	if(n == 0 )
		return cos(n);
	else if(  n<0)
		return n;
		else
		return F(n-3.14)+F(n-3.14/2);
}
int main(){
	cout<<F(-1);
	return 0;
}
