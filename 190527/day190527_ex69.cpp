#include <iostream>
using namespace std;
class Circle {
	int radius;
public:
	void setRadius(int r){ // 반지름 값을 설정한다.
		this->radius = radius;
	}
	int getRadius(){
		return radius;
	}
	double getArea(){ // 면적을 리턴한다.
		return 3.14 * radius * radius;
	}
};
int main(){
	cout << "Number of Circles >> ";
	int n, cnt = 0;
	cin >> n;
	Circle *arr = new Circle[n];
	for (int i = 1; i <= n; i++){
		cout << "Circle " << i << " radius >> ";
		int t;
		cin >> t;
		arr[i - 1].setRadius(t);
		if (arr[i - 1].getArea() > 100) cnt++;
	}
	cout << "result : " << cnt << endl;
}