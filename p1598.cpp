#include <iostream>
#include <cstdio>
#include <cstring> 
using namespace std;


int main(){
	int sum[30], c, mx = 0, lt;
	
	memset(sum, 0, sizeof(sum));
	while((c = getchar()) != EOF){
		if(isalpha(c)){
			sum[c - 'A']++;
			mx = max(mx, sum[c - 'A']);
		}
	}
	
	for(int i = 0; i < mx; i++){
		for(int j = 0; j < 26; j++){
			if(sum[j] >= mx - i)
				cout<< '*';
			else
				cout<< ' ';
			if(j != 25)
				cout<< ' ';
		}
		cout<< endl;
	}
	
	lt = 'A';
	while(lt < 'Z'){
		putchar(lt++);
		cout<< ' ';
	}
	putchar(lt);
	
} 
