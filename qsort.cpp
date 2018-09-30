#include <iostream>
using namespace std;
#define MAXN 100005


int arr[MAXN], n;
int swap(int x, int y){
	int tmp = arr[x];
	arr[x] = arr[y];
	arr[y] = tmp;
}
int select_pivot(int low, int high){
	int mid = (low + high) / 2;
	
	if(arr[low] > arr[high])
		swap(low, high);
	if(arr[mid] > arr[high])
		swap(mid, high);
	if(arr[mid] > arr[low])
		swap(mid, low);
		
	return arr[low];
}

int insert_sort(int low, int high){
	int i, j, tmp;
	
	for(i = low + 1; i <= high; i++){
		tmp = arr[i];
		for(j = i - 1; j >= low; j--){
			if(arr[j] > tmp)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = tmp;
	}
}

int quick_sort(int low, int high){
	int left = low, right = high;
	int first = low, last = high;
	int llen = 0, rlen = 0;
	int i, j;
	int key;
	
	if(low >= high)
		return 0;
	
	if(high - low + 1 < 10){
		insert_sort(low, high);
		return 0;
	}
	
	key = select_pivot(low, high);
	
	while(low < high){
		while(low < high && arr[high] >= key){
			if(arr[high] == key){
				swap(high, right--);
				rlen++;
			}
			high--;
		}
		arr[low] = arr[high];
		
		while(low < high && arr[low] <= key){
			if(arr[low] == key){
				swap(low, left++);
				llen++;
			}
			low++;
		}
		arr[high] = arr[low];
	}
	arr[low] = key;
	
	j = first, i = low - 1;
	while(j < left && arr[i] != key){
		swap(j++, i--);
	}
	i = low + 1, j = last;
	while(j > right && arr[i] != key){
		swap(i++, j--);
	}
	
	quick_sort(first, low - llen - 1);
	quick_sort(low + rlen + 1, last);
}
int main(){
//	freopen("sort.in", "r", stdin);
//	freopen("sort.out", "w", stdout);
	
	cin>> n;
	
	for(int i = 1; i <= n; i++)
		cin>> arr[i];
	
	quick_sort(1, n);
	
	for(int i = 1; i <= n; i++)
		cout<< arr[i] << " ";
	
//	fclose(stdin);
//	fclose(stdout);
}
