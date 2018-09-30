#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define ll long long


ll rem[25][25][25];

ll dfs(ll a, ll b, ll c){
	if(a <= 0 || b <= 0 || c <= 0){
		return 1;
		
	}else if(a > 20 || b > 20 || c > 20){
		if(!rem[20][20][20])
			rem[20][20][20] = dfs(20, 20, 20);
		return rem[20][20][20];
		
	}else if(a < b && b < c){
		if(!rem[a][b][c])
			rem[a][b][c] = dfs(a, b, c-1) + dfs(a, b-1, c-1) - dfs(a, b-1, c);
		return rem[a][b][c];
	}else{
		if(!rem[a][b][c])
			rem[a][b][c] = dfs(a-1, b, c) + dfs(a-1, b-1, c) + dfs(a-1, b, c-1) - dfs(a-1, b-1, c-1);
		return rem[a][b][c];
	}
}

int main(){
	ll a, b, c;
	
	memset(rem, 0, sizeof(rem));
	cin>> a >> b >> c;
	while(!(a == -1 && b == -1 && c == -1)){
		printf("w(%lld, %lld, %lld) = ", a, b, c);
		printf("%lld\n", dfs(a, b, c));
		cin>> a >> b >> c;
	}
}
