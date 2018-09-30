#include <iostream>
using namespace std;


int main(){
	int a, b, s = 0, m = 0;
	for(int i = 1; i <= 7; i++){
		cin>> a >> b;
		if(a+b > 8 && a+b > m){
			s = i;
			m = a + b;
		}
	}
	cout<< s;
}
