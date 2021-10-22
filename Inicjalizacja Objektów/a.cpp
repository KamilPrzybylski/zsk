#include <iostream>
using namespace std;

class Car {
	public:
	unsigned int id=3;
	string brand="fiat";
	string model="multipla";
	void getData();
	
	Car();
	
	Car(unsigned int pId, string pBrand, string pModel);
};

void Car::getData(){
	cout<<"Id: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<endl;
	
}

Car::Car(){
	id=7;
	brand="Audi";
	model="A8";

}

Car::Car(unsigned int pId, string pBrand, string pModel){
	id=pId;
	brand=pBrand;
	model=pModel;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Car bmw;
	bmw.getData();
	
	Car opel = Car(11, "opel", "tigra");
	opel.getData();
	return 0;
}
