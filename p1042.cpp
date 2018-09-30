#include <iostream>
#include <cstdio>
using namespace std;
#define MAXN 70000


int main(){
	int c, a, b, p, q, x, y;
	int ela[MAXN], elb[MAXN], twa[MAXN], twb[MAXN];
	
	a = b = 0;
	p = q = 0;
	x = y = 0;
	while(1){
		c = getchar();
		if(c == 'W'){
			a++;
			x++;
		}else if(c == 'L'){
			b++;
			y++;
		}else if(c == 'E'){
			ela[p] = a;
			elb[p++] = b;
			
			twa[q] = x;
			twb[q++] = y;
			break;
		}
		
		if((a >= 11 && a-b >= 2) || (b >= 11 && b-a >= 2)){
			ela[p] = a;
			elb[p++] = b;
			a = b = 0;
		}
		if((x >= 21 && x-y >= 2) || (y >= 21 && y-x >= 2)){
			twa[q] = x;
			twb[q++] = y;
			x = y = 0;
		}
	}
	for(int i = 0; i < p; i++){
		cout<< ela[i] << ":" << elb[i] << endl;
	}
	cout<< endl;
	
	for(int i = 0; i < q; i++){
		cout<< twa[i] << ":" << twb[i] << endl;
	}
}
