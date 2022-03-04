#include <iostream>

using namespace std;

class Shape{
public:
	virtual void calculateArea()=0;
	virtual void setRadius(float radius)=0;
};

class Circle : public Shape{
	float r;
public:
	Circle(float radius){
		r=radius;
	}
	virtual void calculateArea(){
		cout << "Pole ko³a wynosi: " << 3.14*r*r << " cm2\n";
	};
	void setRadius(float radius){
		r=radius;
	}
};

int main(int argc, char** argv) {
	setlocale(LC_ALL, "polish");
	
	Circle kolo(3);
	kolo.calculateArea();
	kolo.setRadius(10);
	kolo.calculateArea();
	
	Shape *wsk = &kolo;
	wsk->calculateArea();
	wsk->setRadius(3);
	wsk->calculateArea();
	
	return 0;
}
