#include <iostream>
#include <cstring>
using namespace std;


int m[15];
int judge(int x){
	while(x){
		if(m[x % 10])
			return 0;
		else
			m[x % 10] = 1;
		x /= 10;
	}
	return 1;
}
int main(){
	int a, b, c, t1, t2, fl;
	cin>> a >> b >> c;
	
	fl = 0;
	for(int i = 123; i < 987; i++){
		memset(m, 0, sizeof(m));
		m[0] = 1;
		t1 = i * b / a;
		t2 = i * c / a;
		if(judge(i) && judge(t1) && judge(t2) && t1 >= 100 && t1 <= 999 && t2 >= 100 && t2 <= 999){
			cout<< i << ' ' << t1 << ' ' << t2 << endl;
			fl = 1;
		}
	}
	if(!fl)
		cout<< "No!!!";
}
