#include <iostream>
using namespace std;


int main(){
	int n, t, m;
	cin>> n;
	
	m = 0;
	for(int i = 1; ; i++){
		t = i * (i+1) / 2;
		if(t >= n){
			m = i;
			break;
		}
	}
	
	n -= t-m;
	if(m % 2 == 0){
		cout<< n << "/" << m+1-n;
	}else{
		cout<< m+1-n << "/" << n;
	}
} 
