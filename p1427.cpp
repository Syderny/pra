#include <iostream>
using namespace std;


int main(){
	int a[105], i;
	for(i = 1; i < 200; i++){
		cin>> a[i];
		if(!a[i])
			break;
	}
	for(i = i-1; i >=1; i--){
		cout<< a[i];
		if(i > 1)
			cout<< ' ';
	}
}
