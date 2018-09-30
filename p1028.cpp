#include <iostream>
#include <cstdio>
using namespace std;


long long rem[1005];
long long func(int x){
	if(rem[x] != -1){
		return rem[x];
	}else{
		long long t = 1;
		for(int i = 1; i <= x / 2; i++){
			t += func(i);
		}
		rem[x] = t;
		return t;
	}
}
int main(){
	int a;
	cin>> a;
	for(int i = 0; i <= 1005; i++){
		rem[i] = -1;
	}
	rem[1] = 1;
	cout<< func(a);
}
