#include <iostream>
#include <cstdio>
using namespace std;


int main(){
	int a;
	double b;
	cin>> a;
	if(a <= 150){
		b = a * 0.4463;
	}else if(a > 150 && a <= 400){
		b = 0.4463 * 150 + (a-150) * 0.4663;
	}else{
		b = 0.4463 * 150 + 250 * 0.4663 + (a-400) * 0.5663;
	}
	printf("%.1f", b); 
}
