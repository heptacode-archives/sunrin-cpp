#include <iostream>
using namespace std;
class Sample {
    int *p, size;
public:
    Sample(int n){
        size = n;
        p = new int[n];
    }
    void read();
    void write();
    int big();
};
void Sample::read(){
    cout << "Input 10 integers >> ";
    for(int i = 0; i < 10; i++)
        cin >> p[x];
}
void Sample::write(){
    for(int i = 0; i < 10; i++)
        cout << *(p + x) < " "; // cout << p[x]
    cout << endl;
}
int Sample::big(){
    int max = p[0];
    for(int i = 1; i < 10; i++)
        if(max < p[x]){
            max = p[x];
        }
    return max;
}
int main(){
    Sample s();
    s.read();
    s.write();
    cout << "max : " << s.big() << endl;
}