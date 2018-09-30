#include <iostream>
#include <cstring>
using namespace std;


int f(char a, char b){
	return (isalpha(a) && isalpha(b)) || (isdigit(a) && isdigit(b));
}
int main(){
	int p1, p2, p3, s;
	char a[105];
	string t[105];
	
	cin>> p1 >> p2 >> p3;
	cin>> a;
	
	s = 0;
	for(int i = 0; i < strlen(a); i++){
		if(a[i] == '-'){
			if((a[i+1] <= a[i-1]) || !f(a[i+1], a[i-1])){
				t[s++] = "-";
				continue;
			}
			t[s] = "";
			if(p3 == 1){
				for(int j = a[i-1]+1; j < a[i+1]; j++){
					if(p1 == 3){
						for(int k = 0; k < p2; k++){
							t[s] += '*';
						}
					}else if(p1 == 2 && isalpha(a[i-1])){
						for(int k = 0; k < p2; k++){
							t[s] += j + 'A' - 'a';
						}
					}else if(p1 == 1 || isdigit(a[i-1])){
						for(int k = 0; k < p2; k++){
							t[s] += j;
						}
					}
				}
			}else if(p3 == 2){
				for(int j = a[i+1]-1; j > a[i-1]; j--){
					if(p1 == 3){
						for(int k = 0; k < p2; k++){
							t[s] += '*';
						}
					}else if(p1 == 2 && isalpha(a[i-1])){
						for(int k = 0; k < p2; k++){
							t[s] += j + 'A' - 'a';
						}
					}else if(p1 == 1 || isdigit(a[i-1])){
						for(int k = 0; k < p2; k++){
							t[s] += j;
						}
					}
				}
			}
			s++;
		}
	}
	s = 0;
	for(int i = 0; i < strlen(a); i++){
		if(a[i] == '-'){
			cout<< t[s++];
			continue;
		}
		cout<< a[i];
	}
}
