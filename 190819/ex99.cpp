#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<algorithm>
using namespace std;
class BaseSort {
	int arr[101];
public:
	BaseSort();
	void print(int i);
};
BaseSort::BaseSort(){
	for (int i = 1; i <= 100; i++){
		arr[i] = rand() % 500 + 1;
	}
}
void BaseSort::print(int i){
	if (i == 1){
		sort(arr, arr + 101);
		print(0);
	}
	else { // pure print
		for (int i = 1; i <= 100; i++){
			cout << setw(5) << arr[i];
			if (i % 10 == 0){
				cout << endl;
			}
		}
	}
}
int main(){
	srand(time(NULL));
	BaseSort bs;
	cout << "Before Sorting ----------------------" << endl;
	bs.print(0);
	cout << "After Sorting -----------------------" << endl;
	bs.print(1);
	return 0;
}