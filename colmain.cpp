#include "color.h"

int main(void){
	Color rgb(25.0, 255.0, 12.0);
	Color rgb1(123.0, 5.0, 93.0);
	std::cout << rgb << std::endl;
	std::cout << rgb1 << std::endl;
	
	std::cout << rgb-rgb1 << std::endl;
	std::cout << rgb+rgb1 << std::endl;
	std::cout << rgb.scalarMul(2.0) << std::endl;
	std::cout << rgb.negate() << std::endl;
	
	std::cout << "(" << rgb.getR() << ", " << rgb.getG();
	std::cout << ", " << rgb.getB() << ")" << std::endl;
}
