#include <iostream>
#include <cstdio>
using namespace std;


int main(){
	char a[15], mod[] = "0123456789X";
	int j = 1, t = 0;
	
	scanf("%s", a);
	for(int i = 0; i < 11; i++){
		if(a[i] == '-')
			continue;
		t += (a[i] - '0') * j;
		j++;
	} 
//	cout<< t << endl;
	
	if(mod[t % 11] == a[12])
		cout<< "Right";
	else{
		a[12] = mod[t % 11];
		cout<< a;
	}
	return 0;
	
}
