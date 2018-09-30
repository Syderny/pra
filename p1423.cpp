#include<iostream>
using namespace std;


int main(){
	double n, a = 2, s = 0;
	int i = 0;
	
	cin>> n;
	while(s < n){
		s += a;
		i++;
		a *= 0.98;
	}
	cout<< i;
}
