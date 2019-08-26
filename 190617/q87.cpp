#include<iostream>
using namespace std;
int big(int a, int b){
	if (a > b) return a;
	else return b;
}
int big(int *a, int size){
	int max = 0;
	for (int x = 0; x < size; x++){
		if (max < a[x]) max = a[x];
	}
	return max;
}
int main(){
	int arr[5] = { 0, 8, -3, 7, 5 };
	cout << big(4, 6) << endl;
	cout << big(arr, 5) << endl;
}