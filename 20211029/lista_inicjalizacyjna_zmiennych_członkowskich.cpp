#include <iostream>
using namespace std;
//-----------------------------------------------------------------------
class Car {
	unsigned int id;
	public:
		string brand;
		string model;
		
		void getData();
		
		Car();
		Car(string pBrand);
		Car(unsigned int pId, string pBrand, string pModel);
};
//-----------------------------------------------------------------------
void Car::getData(){
	cout<<"Id: "<<id<<"\nMarka i model: "<<brand<<" "<<model<<"\n\n";
}
//-----------------------------------------------------------------------
Car::Car():
	id {0},
	brand {"Marka"},
	model {"Model"}
{cout<<"Kd\n";};
//-----------------------------------------------------------------------
Car::Car(string pBrand):
	brand {pBrand}
{cout<<"Kp\n";};
//-----------------------------------------------------------------------
Car::Car(unsigned int pId, string pBrand, string pModel):
	id {pId},
	brand {pBrand},
	model {pModel}
{cout<<"Kp\n";};
//-----------------------------------------------------------------------
int main() {
	setlocale(LC_CTYPE, "polish");
	Car fiat;
	fiat.getData();
//--------------------------------
	Car fiat1 = Car();
	fiat1.getData();
//--------------------------------
	Car fiat2(10, "Fiat", "Multipla");
	fiat2.getData();
//--------------------------------
	Car fiat3 = Car(20, "Fiat", "Panda");
	fiat3.getData();
//--------------------------------
	Car fiat4 = Car("Fiat");
	fiat4.getData();
//--------------------------------
	//cout<<fiat3.id<<endl;
	
	return 0;
}
