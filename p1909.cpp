#include<iostream>
#include<cstdio>
using namespace std;


int main(){
	int n, o, p, ans = 0x3fffffff, c;
	
	cin>> n;
	for(int i = 0; i < 3; i++){
		cin>> o >> p;
		c = n / o;
//		cout<< (n/o+1) * p << "\n";
		if(n % o)
			c++;
		ans = min(c * p, ans);
	}
	cout<< ans;
}
