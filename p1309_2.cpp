#include <iostream>
using namespace std;
#define MAXN 200005


struct com{
	int num, sum, w;
}c[MAXN];
typedef struct com com;
int swap(int x, int y){
	com tmp = c[x];
	c[x] = c[y];
	c[y] = tmp;
}
int insert_sort(int low, int high){
	int i, j;
	com tmp;
	for(i = low+1; i <= high; i++){
		tmp = c[i];
		for(j = i-1; j >= low; j--){
			if(c[j].sum < tmp.sum || (c[j].sum == tmp.sum && c[j].num > tmp.num))
				c[j+1] = c[j];
			else
				break;
		}
		c[j+1] = tmp;
	}
}
com select_pivot(int low, int high){
	int mid = (low + high) / 2;
	
	if(c[low].num > c[high].num)
		swap(low, high);
	if(c[mid].num > c[high].num)
		swap(mid, high);
	if(c[mid].num > c[low].num)
		swap(mid, low);
		
	return c[low];
}
int quick_sort(int low, int high){
	int first = low, last = high;
	com key;
	
	if(low >= high)
		return 0;
	if(high - low + 1 < 10){
		insert_sort(low, high);
		return 0;
	}
	
	key = select_pivot(low, high);
	while(low < high){
		while(low < high && (c[high].sum < key.sum || (c[high].sum == key.sum && c[high].num > key.num))){
			high--;
		}
		c[low] = c[high];
		
		while(low < high && (c[low].sum > key.sum || (c[low].sum == key.sum && c[low].num < key.num))){
			low++;
		}
		c[high] = c[low];
	}
	c[low] = key;
	
	quick_sort(first, low-1);
	quick_sort(low+1, last);
}
int main(){
	int n, r, q;
	cin>> n >> r >> q;
	
	for(int i = 1; i <= 2*n; i++){
		cin>> c[i].sum;
		c[i].num = i;
	}
	for(int i = 1; i <= 2*n; i++){
		cin>> c[i].w;
	}
	
	for(int i = 1; i <= r; i++){
		quick_sort(1, 2*n);
		for(int j = 1; j <= 2*n; j += 2){
			if(c[j].w > c[j+1].w)
				c[j].sum++;
			else if(c[j].w < c[j+1].w)
				c[j+1].sum++;
		}
		for(int i = 1; i <= 2*n; i++){
			cout<< c[i].num << " " << c[i].sum << endl;
		}
		cout<< endl;
	}
//	insert_sort(1, 2*n);
	quick_sort(1, 2*n);
	cout<< c[q].num << endl;
	for(int i = 1; i <= 2*n; i++){
		cout<< c[i].num << " " << c[i].sum << endl;
	}
	
}
