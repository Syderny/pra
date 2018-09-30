#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main(){
	char str[25], a[15], b[15], c[15], d[15], sym = 0;
	int fl, i, m, n;
	
	cin>> str;
	for(i = 0, fl = 0, m = n = 0; i < strlen(str); i++){
		if(str[i] == '.' || str[i] == '/'){
			fl = 1;
			a[m++] = '\0';
			sym = str[i];
			continue;
		}else if(str[i] == '%'){
			a[m++] = '\0';
			sym = str[i];
			break;
		}
		if(!fl){
			a[m++] = str[i];
		}else{
			b[n++] = str[i];
		}
	}
	b[n++] = '\0';
	
	m = n = 0;
	fl = 0;
	for(int u = strlen(a) - 1; u >= 0; u--){
		if(!fl && a[u] == '0'){
			continue;
		}else{
			fl = 1;
			c[m++] = a[u];
		}
	}
	c[m++] = '\0';
	
	for(int u = strlen(b) - 1; u >= 0; u--){
		d[n++] = b[u];
	}
	d[n++] = '\0';
	
	
	fl = 0;
	for(int u = strlen(d) - 1; u >= 0; u--){
		if(d[u] != '0')
			break;
		d[u] = '\0';
	}
	
	if(sym == '.' || sym == '/'){
		if(strlen(c) == 0){
			c[0] = '0';
			c[1] = '\0';
		}
		if(strlen(d) == 0){
			d[0] = '0';
			d[1] = '\0';
		}
	}
	
	cout<< c << sym << d;
}
