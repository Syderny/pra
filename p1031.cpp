#include <iostream>
using namespace std;


int main(){
	int n, a[105], cnt, tot;
	
	cin>> n;
	tot = 0;
	for(int i = 0; i < n; i++){
		cin>> a[i];
		tot += a[i];
	}
	
	tot /= n;
	cnt = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < tot){
			if(a[i+1] >= tot - a[i]){
				a[i+1] -= tot - a[i];
				a[i] = tot;
				cnt++;
			}else{
				a[i] += a[i+1];
				a[i+1] = 0;
				cnt++;
			}
		}else if(a[i] > tot){
			a[i+1] += a[i] - tot;
			a[i] = tot;
			cnt++;
		}
	}
	cout<< cnt;
}
