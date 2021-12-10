#include <iostream>
using namespace std;

class Animal{
	public:
		string name, breed, voice;
		float weight, height;
		
		void funcPublicAnimal(){
			cout<< "Funkcja publiczna klasy Animal"<<endl;
		}
		
		void setVaccination(bool pVaccination){
			vaccination=pVaccination;
		}
		
		bool getVaccination(){
			return vaccination;
		}
		
		void funcAnimal(){
			cout<< "Funkcja Animal"<<endl;
		}
		
	private:
		bool vaccination;
};

class Dog: public Animal{
	public:
		void aport(){
			cout<<"Aportowanie"<<endl;
		};
		
		void funcAnimal(){
			cout<< "Funkcja Animal w klasie Dog"<<endl;
		}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Animal zwierze;
	zwierze.funcPublicAnimal();
	zwierze.setVaccination(1);
	cout<<zwierze.getVaccination()<<endl;
	zwierze.funcAnimal();
	
	Dog burek;
	burek.funcPublicAnimal();
	burek.aport();
	burek.funcAnimal();
	burek.voice = "Ha³ Ha³";
	cout<<burek.voice<<endl;
	return 0;
}
