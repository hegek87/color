#include <iostream>
#include "color.h"

Color::Color(){ r = g = b = 0; }
/*
Color::Color(double r, double g, double b){
	this->r = r; this->g = g; this->b = b;
}*/

Color::Color(char r, char g, char b){
	this->r = r; this->g = g; this->b = b;
}

Color::Color(int rgb){
	this->r = (rgb & RED) >> 16;
	this->g = (rgb & GREEN) >> 8;
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
	return Color((int)(r*factor), (int)(g*factor), (int)(b*factor));
}

char Color::getR(){ return r; }
char Color::getG(){ return g; }
char Color::getB(){ return b; }

std::ostream& operator<<(std::ostream& os, const Color& other){
	os << "(";
	os << other.r << ", ";
	os << other.g << ", ";
	os << other.b << ")";
	return os;
}

void Color::writeColor(std::ofstream& os){
}
/*
char *Color::getColorData(){
	char *ret[3] = {(char *)r, (char *)g, (char *)b };
	return ret;
}*/
