#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Mammal.h"

using namespace std;

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
