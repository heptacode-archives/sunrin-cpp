#include <iostream>
using namespace std;

class Circle2 {
public:
    int r;
    Circle2(){
        r = 1;
        cout << "Circle2 " << r << "is created" << endl;
    }
    Circle2(int _r){
        r = _r;
        cout << "Circle2 " << r << "is created" << endl;
    }
};

int main(){
    Circle2 arr[3]
    cout << arr[0].r << endl;
    cout << arr[1].r << endl;
    cout << arr[2].r << endl;
}