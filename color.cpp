#include <iostream>
#include "color.h"

Color::Color(){ r = g = b = 0; }
Color::Color(double r, double g, double b){
	this->r = r; this->g = g; this->b = b;
}

Color Color::operator+(const Color& other){
	return Color(r+other.r, g+other.g, b+other.b);
}

Color Color::operator-(const Color& other){
	return Color(r-other.r, g-other.g, b-other.b);
}

Color Color::negate(){
	return Color(-r,-g,-b);
}

Color Color::scalarMul(double factor){
	return Color(r*factor, g*factor, b*factor);
}

double Color::getR(){ return r; }
double Color::getG(){ return g; }
double Color::getB(){ return b; }

std::ostream& operator<<(std::ostream& os, const Color& other){
	os << "(";
	os << other.r << ", ";
	os << other.g << ", ";
	os << other.b << ")";
	return os;
}

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
