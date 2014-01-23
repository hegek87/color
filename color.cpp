#include <iostream>
#include "color.h"

Color::Color(){ r = g = b = 0; }
Color::Color(double r, double g, double b){
	this->r = r; this->g = g; this->b = b;
}

Color::Color(int r, int g, int b){
	this->r = r; this->g = g; this->b = b;
}

Color::Color(int rgb){
	this->r = rgb & RED;
	this->g = rgb & GREEN;
	this->b = rgb & BLUE;
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
