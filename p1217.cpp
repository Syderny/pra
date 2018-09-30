#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int a, b, m, p, q, ans[100005];
int f(int x){
	int cnt = 0;
	while(x){
		x /= 10;
		cnt++;
	}
	return cnt;
}
int isprime(int x){
	for(int i = 2; i <= sqrt(x); i++)
		if(x % i == 0)
			return 0;
	return 1;
}
int h1(int x){
	int s = x;
	x /= 10;
	while(x){
		s *= 10;
		s += x % 10;
		x /= 10;
	}
	return s;
}
int h2(int x){
	int s = x;
	while(x){
		s *= 10;
		s += x % 10;
		x /= 10;
	}
	return s;
}
//int g(int x){
//	int ff = f(x);
//	if(x >= a && x <= b && (2 * ff - 1 <= q || 2 * ff <= q)){
//		int h = h1(x), hh = h2(x);
//		if(isprime(h)){
//			ans[m++] = h;
//		}
//		if(isprime(hh)){
//			ans[m++] = hh;
//		}
//	}else{
//		for(int i = 0; i)
//	}
//}
int main(){
	int h, hh;
	
	cin>> a >> b;
	q = f(b);
//	cout<< h1(a) << ' ' << h2(a);
	m = 0;
	
	for(int i = 1; h1(i) <= b && 2*f(i)-1 <= q; i++){
		h = h1(i), hh = h2(i);
		if(isprime(h) && h >= a){
			ans[m++] = h;
		}
		if(isprime(hh) && hh >= a){
			ans[m++] = hh;
		}
	}
	sort(ans, ans+m);
	
	for(int i = 0; i < m; i++)
		cout<< ans[i] << endl;
}
