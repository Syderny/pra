#include <iostream>
using namespace std;
#define MAXN 100005


int arr[MAXN], n;

int swap(int x, int y){
	int t = arr[x];
	arr[x] = arr[y];
	arr[y] = t;
}
int insert_sort(int low, int high){
	int i, j, tmp;
	
	for(i = low + 1; i <= high; i++){
		tmp = arr[i];
		for(j = i - 1; j >= low; j--){
			if(arr[j] > tmp)
				arr[j+1] = arr[j];
			else
				break;
		}
		arr[j+1] = tmp;
	}
}
int select_pivot(int low, int high){
	int mid = (low + high) / 2;
	
	if(arr[mid] > arr[high])
		swap(mid, high);
	if(arr[low] > arr[high])
		swap(low, high);
	if(arr[low] < arr[mid])
		swap(low, mid);
	
	return arr[low];
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
//	cout<< low << " " << high << endl;
//	for(int i = 1; i <= n; i++)
//		cout<< arr[i] << " ";
//	cout<< endl;
	while(low < high){
//		cout<< "high:\n";
		while(low < high && arr[high] >= key){
			if(arr[high] == key){
				swap(right--, high);
				rlen++;
//				cout<< "fuck\n";
			}
//			cout<< arr[high] << ">=" << key << endl;
			high--;
		}
//		cout<< high << endl << endl;
		arr[low] = arr[high];
		
//		cout<< "low:\n";
		while(low < high && arr[low] <= key){
			if(arr[low] == key){
				swap(left++, low);
				llen++;
//				cout<< "fuck\n";
			}
//			cout<< arr[low] << "<=" << key << endl;
			low++;
		}
//		cout<< low << endl << endl;
		arr[high] = arr[low];
	}
//	cout<< low << " " << high << endl;
	arr[low] = key;
	
	i = low - 1;
	j = first;
	while(j < left && arr[i] != key)
		swap(i--, j++);
	
	i = low + 1;
	j = last;
	while(j > right && arr[i] != key)
		swap(i++, j--);
	
	quick_sort(first, low - 1 - llen);
	quick_sort(low + 1 + rlen, last);
}

int main(){
	cin>> n;
	for(int i = 1; i <= n; i++)
		cin>> arr[i];
		
//	cout<< select_pivot(1, 10) << endl;
	quick_sort(1, n);
	
	for(int i = 1; i <= n; i++)
		cout<< arr[i] << " ";
} 
