#include <iostream>
using namespace std;


int strend(char *s, char *t){
	char *c = t;
	while(*s)
		s++;
	while(*t)
		t++;
	while(t >= c){
		if(*s-- != *t--)
			return 0;
	}
	return 1;
}
int main(){
	char s[] = "hello";
	char t[] = "lelo";
	cout<< strend(s, t);
}
