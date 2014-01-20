#ifndef COLOR_H
#define COLOR_H
class Color{
	private:
		double r;
		double g;
		double b;
	public:
		Color();
		Color(double, double, double);
		
		Color operator+(const Color&);
		Color operator-(const Color&);
		friend std::ostream& operator<< (std::ostream&, const Color&);
		Color negate();
		Color scalarMul(double);
		
		double getR();
		double getG();
		double getB();
};
#endif
