#ifndef COLOR_H
#define COLOR_H
#include <iostream>

static const int RED = 0xFF0000;
static const int GREEN = 0x00FF00;
static const int BLUE = 0x0000FF;
class Color{
	private:
		char r;
		char g;
		char b;
	public:
		Color();
		//Color(double, double, double);
		Color(char,char,char);
		Color(int);
		
		Color operator+(const Color&);
		Color operator-(const Color&);
		friend std::ostream& operator<< (std::ostream&, const Color&);
		Color negate();
		Color scalarMul(double);
		
		char getR();
		char getG();
		char getB();
};
#endif
