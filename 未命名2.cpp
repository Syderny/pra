#include <stdio.h>


int main(){
	int t, a[15], n = 0;
	for(int i = 1; i <= 10; i++){
		scanf("%d", &t);
		if(t > 0){
			a[n++] = t;
		}
	}
	for(int i = 0; i < n; i++)
		printf("%d ", a[i]);
}
