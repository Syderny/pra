#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main(){
	string a, b;
	int j = 0, p, s = 0, first, t;
	
	getline(cin, a);
	getline(cin, b);
	
	for(int i = 0; i < a.length(); i++)
		a[i] = tolower(a[i]);
	for(int i = 0; i < b.length(); i++)
		b[i] = tolower(b[i]);
	
	a = ' ' + a + ' ';
	b = ' ' + b + ' ';
	
	p = b.find(a);
	if(p == string::npos){
		cout<< "-1";
	}else{
		t = p;
//		cout<< p << endl;
		while(p != string::npos){
			p = b.find(a, p + 1);
			s++;
//			cout<< p << endl;
		}
		cout<< s << ' ' << t;
	}
	
	return 0;
}
