#include <iostream>
using namespace std;
#define MAXN 100005


int main(){
	int dir[MAXN], a, b, p, s;
	string nm[MAXN];
	int n, m;
	
	cin>> n >> m;
	for(int i = 0; i < n; i++){
		cin>> dir[i] >> nm[i];
	}
	
	p = 0;
	for(int i = 0; i < m; i++){
		cin>> a >> b;
		s = 1;
		if(dir[p] == 1){
			s = -s;
		}
		if(a == 0){
			s = -s;
		}
		p += s * b;
		if(p >= n)
			p -= n;
		else if(p < 0)
			p += n;
	}
	cout<< nm[p];
}
