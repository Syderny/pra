#include <iostream>
#include <cstring>
using namespace std;


int cmp(string a, string b){
//	cout<< "cmp:" << endl << a << endl << b << endl;
	if(a.length() > b.length())
		return 1;
	else if(a.length() < b.length())
		return 0;
	
	for(int i = 0; i < a.length(); i++){
//		cout<< i+1 << ":" << a[i] << " " << b[i] << endl;
		if(a[i] < b[i]){
//			cout<< i+1 << ":" << a[i] << " < " << b[i] << endl;
			return 0;
		}else if(a[i] > b[i])
			return 1;
	}
	return 1;
}
int main(){
	int n, a[25];
	string c[25];
	
	cin>> n;
	for(int i = 1; i <= n; i++){
		a[i] = i;
		cin>> c[i];
//		cout<< c[i].length() << " ";
	}
//	cout<< endl;
	
	int i, j, tmp;
	string t;
	for(i = 2; i <= n; i++){
		tmp = a[i];
		t = c[i];
		for(j = i-1; j >= 1; j--){
			if(cmp(c[j], t)){
				a[j+1] = a[j];
				c[j+1] = c[j];
			}
			else
				break;
		}
		a[j+1] = tmp;
		c[j+1] = t;
	}
//	cout<< cmp(c[n], c[n-1]) << endl;
	cout<< a[n] << endl << c[n];
//	for(i = 1; i <= n; i++)
//		cout<< c[i] << endl; 
} 
