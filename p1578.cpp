#include <iostream>
#include <cmath>
using namespace std;


int isprime(int x){
	for(int i = 2; i <= sqrt(x); i++)
		if(x % i == 0)
			return 0;
	return 1;
}
int main(){
	int n;
	cin>> n;

	
	for(int i = 2; i < n-4; i++){
		for(int j = 2; j < n-4; j++){
			if(isprime(i) && isprime(j) && isprime(n-i-j)){
				cout<< i << ' ' << j << ' ' << n-i-j;
				return 0;
			}
		}
	}
}
