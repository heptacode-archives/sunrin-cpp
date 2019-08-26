#include <iostream>
using namespace std;
int main(){
    // double *pDouble = new double;
    // *pDouble = 3.14;
    // cout << *pDouble;
    // delete pDouble; // 배열에 할당되는 동적메모리할당된 것을 반환
    double *pDouble = new double(3.14);
    cout << *pDouble;
    delete pDouble; // 배열에 할당되는 동적메모리할당된 것을 반환
}