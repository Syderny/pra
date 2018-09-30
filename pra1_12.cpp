#include<iostream>
#include<cstdio>
using namespace std;
#define IN 1
#define OUT 0


int main(){
	int c, stt = OUT;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			stt = OUT;
		}else{
			if(stt == OUT){
				stt = IN;
				cout<< endl;
			}
			putchar(c);
		}
	}
}
