#include <iostream>
struct Circle
{
    int r;
};

int main(){
    struct Circle var = { 10 };
    struct Circle *p;
    p = &var;
    std::cout << "var.r : " << var.r << std::endl;
    std::cout << "(*p).r : " << (*p).r << std::endl;
    std::cout << "p->r : " << p->r << std::endl;
    (*p).r = 30;
    std::cout << "var.r : " << var.r << std::endl;
    std::cout << "(*p).r : " << (*p).r << std::endl;
    std::cout << "p->r : " << p->r << std::endl;
}