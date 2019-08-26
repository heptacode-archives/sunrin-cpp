#include <iostream>
int main(){
    // int num = 10;
    // int *p; // int형 포인터 변수
    // p = &num; // 포인터변수 p에 num변수의 시작주소를 저장
    //             // p --> num
    // std::cout << "num : " << num << std::endl;
    // std::cout << "*p : " << *p << std::endl;
    // *p = 20;
    // std::cout << "*p : " << *p << std::endl;

    // 포인터 상수: int형 1차원 배열의 이름
    int arr[10] = { 0,1,2,3,4,5,6,7,8,9,};
    int *p = arr;
    std::cout << "*p : " << *p << std::endl;
    std::cout << "*(p+1) : " << *(p+1) << std::endl;
    std::cout << "*(p+2) : " << *(p+2) << std::endl;
    std::cout << "*p[2] : " << *p[2] << std::endl;
}