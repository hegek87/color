#include "color.h"

int main(void){
	std::ofstream file("test");
	Color c1(2,8,18);
	c1.writeColor(file);
	std::ifstream read;
	read.open("test.txt");
	unsigned char r = read.get();
	unsigned char g = read.get();
	unsigned char b = read.get();
	int i = 0;
	while(i++ != b);
	std::cout << i << std::endl;
	Color c2(r,g,b), c3 = c1+c2;
	c3.writeColor(file);
/*
	Color rgb(1,2,3);
	Color rgb1(10,102,235);
	std::cout << rgb << std::endl;
	std::cout << rgb1 << std::endl;
	
	std::cout << rgb-rgb1 << std::endl;
	std::cout << rgb+rgb1 << std::endl;
	std::cout << rgb.scalarMul(2.0) << std::endl;
	std::cout << rgb.negate() << std::endl;
	
	std::cout << "(" << rgb.getR() << ", " << rgb.getG();
	std::cout << ", " << rgb.getB() << ")" << std::endl;
	int c = 0xA187F2;
	Color t(c);
	std::cout << t << std::endl;
	std::cout << 0xA1 << " = " << ((c&0xFF0000) >> 16) << std::endl;
	std::cout << 0x87 << std::endl;
	std::cout << 0xF2 << std::endl;
	*/
}
