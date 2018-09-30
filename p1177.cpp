#include <iostream>
#include <algorithm>
using namespace std;
#define MAXN 100005


int a[MAXN];

int quicksort(int l, int r){
	int i = l, j = r;
	int k = a[(r+l)/3];
	
	if(i >= j)
		return 0;
	
	while(i < j){
		while(i < j && a[j] >= k)
			j--;
		a[i] = a[j];
		
		while(i < j && a[i] < k)
			i++;
		a[j] = a[i];
		
	}
	a[j] = k;
	
	quicksort(l, i-1);
	quicksort(j+1, r);
}
int main(){
	int n;
	cin>> n;
	for(int i = 1; i <= n; i++){
		cin>> a[i];
	}
	quicksort(1, n);
	for(int i = 1; i <= n; i++){
		cout<< a[i] << " ";
	}
} 
