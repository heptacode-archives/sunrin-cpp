#include <iostream>
using namespace std;
int main(){
    int *arr = new int[5];
    float sum = 0;
    cout << "Input 5 integer >> ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    for (int j = 0; j < 5; j++)
        sum += arr[j];
    cout << "avg : " << sum / 5 << endl;
    delete []arr;
}