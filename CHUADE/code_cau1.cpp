#include <iostream>
#include <math.h>
using namespace std;
int f(int a){
	if(a<0)
		return abs(a);
	else{
	 if(a == 0 ){
		return f(a-5);
	}else 
		return (a + f(a-1));
	}
}
int main(){
	int a;
	cin>>a;
	cout<<f(a);
	return 0;
}
//b, tính f(5)
//f(5) = 5 + f(5-1) = 5 + f(4)
//f(4) = 4 + f(4-1) = 4 + f(3)
//f(3) = 3 + f(3-1) = 3 + f(2)
//f(2) = 2 + f(2-1) = 2 + f(1)
//f(1) = 1 + f(1-1) = 1 + f(0)
//f(0) = f(0-5) = f(-5)
//f(-5) = |-5| = 5
//
//-> f(5) = 5 + 4 + 3 + 2 + 1 + 5 = 20


