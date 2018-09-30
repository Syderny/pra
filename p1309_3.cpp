#include <iostream>
#include <algorithm>
using namespace std;
#define MAXN 200005


int n;
struct com{
	int num, sum, w;
}c[MAXN];
typedef struct com com;
com win[MAXN], lose[MAXN];
int cmp(com a, com b){
	if(a.sum == b.sum)
		return a.num < b.num;
	return a.sum > b.sum;
}
int merge_sort(){
	int i, j, k;
	i = j = k = 1; 
	while(i <= n && j <= n){
		if(cmp(win[i], lose[j]))
			c[k++] = win[i++];
		else
			c[k++] = lose[j++];
	}
	while(i <= n)
		c[k++] = win[i++];
	while(j <= n)
		c[k++] = lose[j++];
}
int main(){
	int r, q;
	int it;
	cin>> n >> r >> q;
	
	for(int i = 1; i <= 2*n; i++){
		cin>> c[i].sum;
		c[i].num = i;
	}
	for(int i = 1; i <= 2*n; i++){
		cin>> c[i].w;
	}
	
	sort(c+1, c+2*n+1, cmp);
	
	
	for(int i = 1; i <= r; i++){
		it = 1;
		
		for(int j = 1; j <= 2*n; j += 2){
			if(c[j].w > c[j+1].w){
				c[j].sum++;
				win[it] = c[j];
				lose[it++] = c[j+1];
			}
			else{
				c[j+1].sum++;
				win[it] = c[j+1];
				lose[it++] = c[j];
			}
		}
		merge_sort();
	}
	
	cout<< c[q].num;
	
}
