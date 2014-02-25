#ifndef COLOR_H
#define COLOR_H
#include <iostream>
#include <fstream>

const static int RED = 0xFF0000;
const static int GREEN = 0x00FF00;
const static int BLUE = 0x0000FF;
const static int BLACK = 0x000000;
const static int WHITE = 0xFFFFFF;
const static int YELLOW = 0xFFFF00;

class Color{
	private:
		char r;
		char g;
		char b;
	public:
		Color();
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
		std::ofstream& writeColor(std::ofstream&);
};
#endif
