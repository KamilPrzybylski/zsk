#include <iostream>
using namespace std;

class Dog{
	public:
	string color, eyeColor, name, brand;
	unsigned short int height, lenght, weight;
	void sit();
	void layDown();
	void shake();
	void come();
	void showData();
};

void Dog::sit(){
	cout<<"Pies siada"<<endl;
}
void Dog::layDown(){
	cout<<"Pies lezy"<<endl;
}
void Dog::shake(){
	cout<<"Pies macha ogonem"<<endl;
}
void Dog::come(){
	cout<<"Pies idzie do ciebie"<<endl;
}
void Dog::showData(){
	cout<<"Imie: "<<name<<"\nRasa: "<<brand<<"\nKolor: "<<color<<"\nKolor oczu: "<<eyeColor<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Dog rayne;
	rayne.showData();
	rayne.sit();
	rayne.layDown();
	rayne.shake();
	rayne.come();
	return 0;
}
