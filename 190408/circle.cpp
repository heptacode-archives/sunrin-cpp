#include "circle.h"
Circle::Circle() : Circle(1){ radius = 1; }
Circle::Circle(int r){ radius = r; }
double Circle::getArea(){ return radius * radius * 3.14; }