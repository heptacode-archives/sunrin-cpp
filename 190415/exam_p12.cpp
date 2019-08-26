#include <iostream>
#include "Human.h"
#include "jinsang.h"

int main() {
	Human king;
	Human jaeyeol(3); // ´« 2°³ + ½É¾ÈÀÇ ´«1°³
	std::cout << "king eye num: " << king.getEye() << std::endl;
	std::cout << "jaeyeol eye num: " << jaeyeol.getEye() << std::endl;
}
