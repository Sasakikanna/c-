#include < iostream>
#include "Calclation.h"
//‘ã“ü
void Calclation::SetA(float a) {
	A = a;
}
void Calclation::SetB(float b) {
	B = b;
}
//ŒvŽZ‚µ‚Ä•\Ž¦
void Calclation::Disp() {
	std::cout << A << " + " << B << " = " << A + B << "\n";
	std::cout << A << " + " << B << " = " << A - B << "\n";
}