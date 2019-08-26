#include <iostream>
using namespace std;
class Rect {
    int width, height;
public:
    Rect(int w, h){
        width = w;
        height = h;
    }
    int getWidth(){
        return width;
    }
    int getHeight(){
        return height;
    }
    int getArea(){
        return width * height;
    }
};
int main(){
    Rect *p;
    int w, h;
    cin >> w >> h;
    // 1번
    p = new Rect(w, h);
    // 2번
    cout << "area : " << p -> getArea() << endl;
    // 3번
    delete p;
}