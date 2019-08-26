#include "Human.h"

Human::Human() { eye = 2; }
Human::Human(int e) { eye = e; }
void Human::setEye(int e) { eye = e; }
int Human::getEye() { return eye; }