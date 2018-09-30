#include <iostream>
using namespace std;


int main(){
	int a[20], x, s = 0;
	for(int i = 0; i < 10; i++){
		cin>> a[i];
	}
	cin>> x;
	x += 30;
	for(int i = 0; i < 10; i++){
		if(a[i] <= x)
			s++;
	}
	cout<< s;
}
