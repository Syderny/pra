#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;


int main(){
	char str[500], alp;
	int isleft, coe, con, sgn, num;
	
	cin>> str;
	isleft = 1;
	coe = con = 0;
	sgn = 1;
	for(int i = 0; i < strlen(str); i++){
		num = 0;
		while(isdigit(str[i])){
			num *= 10;
			num += str[i] - '0';
			i++;
		}
		
		if(i < strlen(str) && isalpha(str[i])){
			alp = str[i];
			if(!isleft)
				sgn = -sgn;
			if(num == 0)
				num = 1;
			coe += sgn * num;
//			cout<< "coe=" << coe << endl;
		}else{
			if(isleft)
				sgn = -sgn;
			con += sgn * num;
//			cout<< "con=" << con << endl;
		}
		if(str[i] == '+'){
			sgn = 1;
		}else if(str[i] == '-'){
			sgn = -1;
		}else if(str[i] == '='){
			isleft = 0;
			sgn = 1;
		}
	}
	if(con == 0)
		coe = fabs(coe);
	printf("%c=%.3f", alp, con / (coe * 1.0));
}
