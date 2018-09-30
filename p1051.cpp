#include <iostream>
#include <cstring>
using namespace std;


struct stu{
	string name;
	int g1, g2, e, tot;
	char w, l;
}s[105];
int main(){
	int n, sum = 0;
	cin>> n;
	
	for(int i = 1; i <= n; i++){
		cin>> s[i].name >> s[i].g1 >> s[i].g2 >> s[i].l >> s[i].w >> s[i].e;
		s[i].tot = 0;
		if(s[i].g1 > 80 && s[i].e >= 1)
			s[i].tot += 8000;
		if(s[i].g1 > 85 && s[i].g2 > 80)
			s[i].tot += 4000;
		if(s[i].g1 > 90)
			s[i].tot += 2000;
		if(s[i].g1 > 85 && s[i].w == 'Y')
			s[i].tot += 1000;
		if(s[i].g2 > 80 && s[i].l == 'Y')
			s[i].tot += 850;
		sum += s[i].tot;
	}
	
	for(int i = 2; i <= n; i++){
		int j;
		struct stu tmp = s[i];
		for(j = i-1; j >= 1; j--){
			if(s[j].tot >= tmp.tot)
				s[j+1] = s[j];
			else
				break;
		}
		s[j+1] = tmp;
	}
	
	cout<< s[n].name << endl << s[n].tot << endl << sum;
}
