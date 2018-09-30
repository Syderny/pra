#include <iostream>
#include <cmath> 
using namespace std;


int n, k, a[25], cnt;
int isprime(int x){
	for(int i = 2; i < sqrt(x); i++)
		if(x % i == 0)
			return 0;
	return 1;
}
int func(int sum, int t, int p){
	if(t >= k){
//		cout<< sum << endl;
		if(isprime(sum))
			cnt++;
	}else{
		for(int i = p+1; i < n; i++){
			func(sum + a[i], t + 1, i);
		}
	}
}
int main(){
	
	cin>> n >> k;
	for(int i = 0; i < n; i++)
		cin>> a[i];
	cnt = 0;
	func(0, 0, -1);
	cout<< cnt;
}
