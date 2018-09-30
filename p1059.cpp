#include <iostream>
#include <cstring>
using namespace std;


int a[105], b[1005];
int insert_sort(int low, int high){
	int i, j, tmp;
	for(i = low+1; i <= high; i++){
		tmp = a[i];
		for(j = i-1; j >= low; j--)
			if(a[j] > tmp)
				a[j+1] = a[j];
			else
				break;
		a[j+1] = tmp;
	}
}
int main(){
	int n, t, s = 0;
	cin>> n;
	memset(b, 0, sizeof(b));
	for(int i = 1; i <= n; i++){
		cin>> t;
		if(!b[t]){
			b[t] = 1;
			a[++s] = t;
		}
	}
	insert_sort(1, s);
	cout<< s << endl;
	for(int i = 1; i <= s; i++)
		cout<< a[i] << " ";
}
