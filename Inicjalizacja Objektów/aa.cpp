#include <iostream>
using namespace std;

class Car {
	public:
	unsigned int id=3;
	string brand="fiat";
	string model="multipla";
	void getData();
	
	Car(unsigned int pId=10, string pBrand="FIAT", string pModel="MULTIPLA");
};

void Car::getData(){
	cout<<"Id: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<endl;
	
}

Car::Car(unsigned int pId, string pBrand, string pModel){
	id=pId;
	brand=pBrand;
	model=pModel;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Car bmw(13, "BMW", "X6");
	bmw.getData();
	return 0;
}
