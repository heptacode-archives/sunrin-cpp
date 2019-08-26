#include<iostream>
using namespace std;
int sum(int a, int b){
	int sum = 0;
	for (int x = a; x <= b; x++)
		sum += x;
	return sum;
}
int sum(int a){
	int sum = 0;
	for (int x = a; x <= b; x++)
		sum += x;
	return sum;
}
int main(){
	cout << sum(3, 5) << " ";
	cout << sum(3) << " ";
	cout << sum(100) << " ";
}