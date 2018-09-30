#include <iostream>
using namespace std;


int n, cnt;
int ans[10000][10], tmp[10];

int dfs(int c, int l){
	if(c == 10 && !l){
		for(int i = 0; i < 10; i++)
			ans[cnt][i] = tmp[i];
		cnt++;
		return 0;
	}
	for(int i = 1; i <= 3; i++){
		if((10 - c - 1) * 3 + i < l)
			continue;
		if((10 - c - 1) + i > l)
			break;
		tmp[c] = i;
		dfs(c+1, l-i);
	}
	
	return 0;
}
int main(){
	cin>>n;
	
	if(n > 30 && n < 10){
		cout<< 0;
		return 0;
	}
	
	cnt = 0;
	dfs(0, n);
	
	cout<< cnt << endl;
	for(int i = 0; i < cnt; i++){
		for(int j = 0; j < 10; j++)
			cout<< ans[i][j] << " ";
		cout<< endl;
	}
}
