#include <iostream>
using namespace std;


int main(){
	int n, x, c, s = 0, a;
	cin>> n >> x;
	
	for(int i = 1; i <= n; i++){
		a = i;
		while(a){
			c = a % 10;
			a /= 10;
			if(c == x)
				s++;
		}
	}
	cout<< s;
}
