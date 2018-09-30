#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main(){
	int a, b;
	char c[10], d[10];
	
	cin>> c >> d;
	
	a = b = 1;
	for(int i = 0; i < strlen(c); i++){
		a *= (c[i] - 'A' + 1);
	}
	for(int i = 0; i < strlen(d); i++){
		b *= (d[i] - 'A' + 1);
	}
	
	if((a % 47) == (b % 47)){
		cout<< "GO";
	}else{
		cout<< "STAY";
	}
	return 0;
}
