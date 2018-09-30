#include<iostream>
using namespace std;


int a[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int func(int x){
	int cnt = 0;
	if(!x)
		return 6;
	while(x){
		cnt += a[x % 10];
		x /= 10;
	}
	return cnt;
}
int main(){
	int n, s, o, p, q;
	cin>> n;
	
	n -= 4;
	s = 0;
	for(int i = 0; i <= 800; i++){
		o = func(i);
		for(int j = 0; j <= 800; j++){
			p = func(j);
			q = func(i+j);
			if(o + p + q == n){
				s++;
//				cout<< i << '+' << j << '=' << i+j << endl;
//				cout<< o << ' ' << p << endl << endl;
			}
		}
	}
	cout<< s;
}
