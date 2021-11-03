#include <iostream>

using namespace std;
int chuyen(int n, char nguon, char trunggian, char dich){
	if(n == 1){
		cout<<nguon<<"==>"<<dich<<endl;;
	}
	else {
		chuyen(n-1,nguon,dich,trunggian);
		chuyen(1,nguon,trunggian,dich);
		chuyen(n-1,trunggian,nguon,dich);
	}
}
int main(){
	int n;
	cout<<"\nNhap so dia n= ";	cin>>n;
	chuyen(n,'A','B','C');

}
