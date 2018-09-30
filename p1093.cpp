#include <iostream>
#include <algorithm>
using namespace std;


struct student{
	int a, b, c;
	int tot, num;
}stu[305];
typedef struct student stud;
int cmp(stud a, stud b){
	if(a.tot > b.tot)
		return 1;
	else if(a.tot == b.tot){
		if(a.a > b.a)
			return 1;
		else if(a.a == b.a){
			if(a.num < b.num)
				return 1;
			else
				return 0;
		}else{
			return 0;
		}
	}else
		return 0;
} 
int main(){
	int n;
	cin>> n;
	
	for(int i = 0; i < n; i++){
		cin>> stu[i].a >> stu[i].b >> stu[i].c;
		stu[i].tot = stu[i].a + stu[i].b + stu[i].c;
		stu[i].num = i+1;
	}
	
	sort(stu, stu+n, cmp);
	
	for(int i = 0; i < 5; i++)
		cout<< stu[i].num << " " << stu[i].tot << endl;
} 
