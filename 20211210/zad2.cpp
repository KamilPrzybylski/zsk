#include <iostream>
using namespace std;

class Vechicle{
	public:
		string brand, model;
		float fuelAmount, capacity, numberSeats;
		unsigned short int numberOfSeats;
		void applyBrakes(){
			cout<<"hamowanie"<<endl;
		}
};

class Bus: public Vechicle{
	public:
		unsigned short int numberOfStandingPlaces;
};

class Car: public Vechicle{
	public:
};

class Truck: public Vechicle{
	public:
		bool semiTrailer;
		int numberOfPallets;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	
	
	
	return 0;
}
