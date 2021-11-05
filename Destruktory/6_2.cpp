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
			cout<<"Wywo³anie destruktora"<<endl;
		}
};
//____________________________________________________________________
Worker::Worker(){
	cout<<"Konstruktor Domyœlny"<<endl;
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
	cout<<"Imiê i nazwisko: "<<name<<" "<<surname<<"\n"<<endl;
}
//____________________________________________________________________
void createObjectWorker(){
	Worker worker;
	worker.getData();
	cout<<"Wywo³anie funkcji"<<endl;
}
void createObjectWorker1(string pName, string pSurname){
	Worker worker (pName, pSurname);
	worker.getData();
	cout<<"Wywo³anie funkcji"<<endl;
}
//____________________________________________________________________
int main() {
	setlocale(LC_CTYPE, "polish");
	
	Worker kowalski = Worker("Janusz", "Kowalski");
	kowalski.getData();
	
	cout<<"WskaŸnik"<<endl;
	Worker *p_kowalski = new Worker("Jan", "Kowalski");
	p_kowalski->getData();
	delete p_kowalski;
	
	createObjectWorker1("Anna", "Kowalska");
	return 0;
}
