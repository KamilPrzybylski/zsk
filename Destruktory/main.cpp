#include <iostream>
using namespace std;

class Worker{
	public:
		string name, surname;
		static int s_counter;
		void getData();
		
		Worker(string pName, string pSurname);
		~Worker(){
			cout<<"Wywo³anie destruktora "<<"jest "<<s_counter<<" obj"<<endl;
		}
};

Worker::Worker(string pName, string pSurname){
	s_counter++;
	name = pName;
	surname = pSurname;
	cout<<"Konstruktor Parametryczny "<<s_counter<<endl;
}

void Worker::getData(){
	cout<<"Imiê i nazwisko: "<<name<<" "<<surname<<endl;
}

int Worker::s_counter=0;

int main() {
	setlocale(LC_CTYPE, "polish");
	
	Worker kowal = Worker("Jan", "Kowalski");
	kowal.getData();
	
	Worker kowal2 = Worker("JaN", "KowalskI");
	kowal2.getData();
	
	return 0;
}
