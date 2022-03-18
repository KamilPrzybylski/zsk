#include <iostream>

using namespace std;

class Animal {
	public:
		void className() {
			cout<<"Klasa Animal\n";
		}
		virtual void speak() {
			cout<<"D�wi�k zwierz�cia\n";
		}
};

class Dog : public Animal {
	public:
		void className() {
			cout<<"Klasa Dog\n";
		}
		void speak() override{
			cout<<"Ha� Ha�\n";
		}
};

int main(){
	setlocale(LC_ALL, "polish");
	Animal zwierze;
	cout<<sizeof(zwierze)<<endl;
	
	Dog pies;
	cout<<sizeof(pies)<<endl;
	
	Dog *wskd = new Dog;
	wskd->className();
	wskd->speak();
	
	Animal *wska = new Dog;
	wska->className();
	wska->speak();
	
	return 0;
}
