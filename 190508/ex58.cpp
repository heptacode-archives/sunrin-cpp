#include <iostream>
using namespace std;
class Circle {
    int radius;
public:
    void setRadius(int r);
    int getRadius();
    double getArea();
};
double Circle::getArea(){
    return 3.14 * radius * radius;
}
int main(){
    Circle arr[3];
    int r;
    int count = 0;
    for(int x = 0; x < 3; x++){
        cout << "Circle " << x << "radius >> " << endl;
        cin >> r;
        arr[x].setRadius(r);
        if(arr[x].getArea() > 1000) count++;
    }
    cout << "result : " << count << endl;
}