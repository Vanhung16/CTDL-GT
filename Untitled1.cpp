#include <iostream>
#include <string.h>
#include <stdio.h>
#define max 20
using namespace std;
struct danhsach{
	char masv[15];
	char hodem[15];
	char ten[15];
	char gioitinh[15];
	int namsinh;
	float diemtb;
};
struct list{
	int count;
	danhsach sv[max];
};
list L;
void create (list &L){
	L.count = -1;
}
//kiem tra rong
int empty(list &L){
	return L.count == -1;
}
int full(list &L){
	return L.count = max -1;
}
int xoa(list &L, int k){
	if( k <= L.count +1 && k>0)
	{
		for(int i = k ; i <= L.count  ; i++){
			L.sv[i-1] = L.sv[i];
	
		}
		--L.count;
		return 1;
	}else
	return 0;
}
int chen(list &L, int k , danhsach x){
	if(k <= L.count && k > 0 && full(L)){
		for(int i = L.count ; i >= k-1;i--){
			L.sv[i+1] = L.sv[i];
		}
		L.sv[k-1] = x;
		L.count++;
		return 1;
	}else
	return 0;
}
void sapxep(list &L){
	for(int i = 1 ; i <= L.count ; i++){
		danhsach tam = L.sv[i];
		int j = i-1;
		while(j >= 0 && strcmp(L.sv[j].ten,tam.ten) > 0){
			L.sv[j+1].ten = L.sv[j].ten;
			--j
		}
		L.sv[j+1].ten = L.sv[i].ten
	}
}
int main(){
	
	return 0;
}
