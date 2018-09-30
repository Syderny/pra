#include <iostream>
using namespace std;


int main(){
	int l, m, t[10005];
	int p, q, s = 0;
	cin>> l >> m;
	
	for(int i = 0; i <= l; i++){
		t[i] = 1;
	}
	for(int i = 0; i < m; i++){
		cin>> p >> q;
		for(int a = p; a <= q; a++){
			t[a] = 0;
		}
	}
	for(int i = 0; i <= l; i++){
		if(t[i]){
			s++;
//			cout<< i << endl;
		}
	}
	cout<< s;
}
