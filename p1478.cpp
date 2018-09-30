#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int n, s, a, b, x, y;
	int cnt, p[5005], t;
	cin>> n >> s >> a >> b;
	
	t = 0;
	for(int i = 0; i < n; i++){
		cin>> x >> y;
		if(x <= a + b){
			p[t++] = y;
		}
	}
	sort(p, p+t);
	
	cnt = 0;
	
	while(s >= p[cnt] && cnt < t){
		s -= p[cnt++];
	}
	cout<< cnt;
}
