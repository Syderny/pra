#include <iostream>
using namespace std;


int main(){
	double s, x, p, sp;
	int t;
	cin>> s >> x;
	
	p = 0;
	t = 0;
	sp = 7;
	while(p <= s + x){
		if(p >= s-x && p <= s+x){
			t++;
		}
		p += sp;
		sp *= 0.98;
	}
	if(t >= 2)
		cout<< "y";
	else
		cout<< "n";
}
