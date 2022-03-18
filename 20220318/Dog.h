#include "Mammal.h"
class Dog : public Animal, public Mammal {
	public:
		void className() {
			std::cout<<"Klasa Dog\n";
		}
		void speak() override{
			std::cout<<"Ha³ Ha³\n";
		}
};
