#include <iostream>
using namespace std;
//____________________________________________________________________
class Worker{
	public:
		string name, surname;
		void getData();
		
		Worker();
		Worker(string pName, string pSurname);
		~Worker(){
			cout<<"Wywo�anie destruktora"<<endl;
		}
};
//____________________________________________________________________
Worker::Worker(){
	cout<<"Konstruktor Domy�lny"<<endl;
}
//____________________________________________________________________
Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
{
	cout<<"Konstruktor Parametryczny"<<endl;
}
//____________________________________________________________________
void Worker::getData(){
	cout<<"Imi� i nazwisko: "<<name<<" "<<surname<<endl;
}
//____________________________________________________________________
int main() {
	setlocale(LC_CTYPE, "polish");
	
	Worker kowalski;
	
	Worker nowak;
	
	return 0;
}
