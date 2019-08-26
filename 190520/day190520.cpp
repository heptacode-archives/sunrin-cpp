// 기본형 : int... -> 기본형 배열 -> class
// 데이터타입 * 변수 = new 데이터타입;
// 데이터타입 * 변수 = 

// 변수 1개에 해당되는 동적메모리할당을 했습니다.
// 배열에 대한 동적메모리할당을 해볼게요.
// int *p = new int[10] // 크기가 10인 int형 배열을 선언(정의)
// delete []p; // "delete p[];" -> 에러
#include <iostream>
using namespace std;
class Circle {
    int r;
public:
    // 생성자 2개, 게터, 세터
    Circle(){ cout << "default Circle()" << endl; }
    Circle(int _r) { r = _r; cout << "Circle(" << r << ")" << endl; }
    int getR(){ return r; }
    void setR(int _r){ r = _r; }
};
int main(){
    Circle *p1 = new Circle();
    Circle *p2 = new Circle(100);
    Circle p3;
    Circle p4(10);
    cout << p3.getR();
}
// int main(){
//     // int *p = new int[10][10]; // int *p = new int(10);
//     int *p = new int[10]{1,2,3,4,5};
//     for(int x = 0; x < 10; x++)
//         p[x] = x;
//     for(int x = 0; x < 10; x++)
//         cout << p[x] << endl;
//     delete []p; // 배열에 할당되는 동적메모리할당된 것을 반환
// }
// int main(){
//     Circle *p = new Circle; // int 타입의 변수 할당
//     // int *p = new int; // int 타입의 변수 할당
//     if (!p){ // 메모리할당 실패 == 프로그램 종료
//         std::cout << "memory allocation error";
//         return 1; // 0이 아닌 값은 에러
//     }
//     // *p = 10;
//     (*p).r = 10;
//     // std::cout << *p << std:endl;
//     std::cout << *p << std:endl;
//     delete p; // 메모리 반환
// }