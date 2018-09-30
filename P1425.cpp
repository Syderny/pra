#include <iostream>
using namespace std;


int main(){
	int a, b, c, d, h, m;
	cin>> a >> b >> c >>d;
	h = c-a-1;
	m = 60-b+d;
	if(m >= 60){
		m -= 60;
		h++;
	}
	cout<< h << " " << m ;
}
