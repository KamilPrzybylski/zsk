#include <iostream>
using namespace std;
class Rectangle{
	private:
		double sideA;
		double sideB;
	public:
		Rectangle();
		Rectangle(double pSideA, double pSideB);
		Rectangle(const Rectangle &);
		
		void catchSides(double&, double&);
		void getSides(double pSideA, double pSideB);
		void getSides();
		double area();
		double circuit();
};
Rectangle::Rectangle(){
	cout<<"\nKd";
}
Rectangle::Rectangle(double pSideA, double pSideB){
	sideA=pSideA;
	sideB=pSideB;
	cout<<"\nKp";
}
Rectangle::Rectangle(const Rectangle& model){
	sideA=model.sideA;
	sideB=model.sideB;
	cout<<"\nKk";
}
		
void Rectangle::catchSides(double&pSideA, double&pSideB){
	pSideA=sideA;
	pSideA=sideB;
}
void Rectangle::getSides(double pSideA, double pSideB){
	sideA=pSideA;
	sideB=pSideB;
}
void Rectangle::getSides(){
	cout<<"\nBok A: "<<sideA<<"\nBok B: "<<sideB;
}
double Rectangle::area(){
	return sideA * sideB;
}
double Rectangle::circuit(){
	return 2 * sideA + 2 * sideB;
}

Rectangle copyRectangle(Rectangle rectangle){
	return rectangle;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	double a,b;
	
	cout<<"\n1p\n";
	Rectangle p1(10, 20);
	cout<<"\na: "<<a<<"\nb: "<<b;
	p1.getSides();
	p1.catchSides(a,b);
	cout<<"\na: "<<a<<"\nb: "<<b;

	cout<<"\n\n2p\n";
	Rectangle p2=p1;
	cout<<"\na: "<<a<<"\nb: "<<b;
	p2.getSides();
	p2.catchSides(a,b);
	cout<<"\na: "<<a<<"\nb: "<<b;

	cout<<"\n\n3p\n";
	Rectangle p3(p1);
	cout<<"\na: "<<a<<"\nb: "<<b;
	p3.getSides();
	p3.catchSides(a,b);
	cout<<"\na: "<<a<<"\nb: "<<b;
	
	cout<<"\n\n4p\n";
	Rectangle p4;
	p4=copyRectangle(p1);
	cout<<"\na: "<<a<<"\nb: "<<b;
	p4.getSides();
	p4.catchSides(a,b);
	cout<<"\na: "<<a<<"\nb: "<<b;
	return 0;
}
