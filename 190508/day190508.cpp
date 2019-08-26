#include <iostream>
using namespace std;
class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int r){ radius = r; }
    double getArea(){ return 3.14 * radius * radius; }
    void setRadius(int r) { radius = r; }
    int getRadius(){ return radius; }
}
int main(){
    // Circle obj1;
    // cout << obj1.getArea();
    // Circle arr[2][3]; // 2차원 배열(각 행당 3열) 2행 3열 2차원 배열
    // arr[0][0].setRadius(1); // arr배열의 0행 0열에 있는 객체에 접근
    // arr[0][1].setRadius(2);
    // arr[0][2].setRadius(3);
    // arr[1][0].setRadius(4);
    // arr[1][1].setRadius(5);
    // arr[1][2].setRadius(6);
    Circle arr[2][3] = { { Circle(1), Circle(2), Circle(3) },
                        { Circle(4), Circle(5), Circle(6) } };
}