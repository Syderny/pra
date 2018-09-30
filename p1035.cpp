#include<iostream>
using namespace std;


int main(){
	double k, s = 0;
	int i = 0;
	
	cin>> k;
	while(s <= k){
		i++;
		s += 1.0 / i;
	}
	cout<< i;
}
