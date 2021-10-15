#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;
	
};

class Worker {
	public:
		unsigned int id;
		string name, surname;
		Date dateBirthday;
		void getData();
		
		Worker(int id);
		Worker(int, string, string, Date);
};

void Worker::getData(){
	cout<<"Id: "<<id
	<<"\nImie i Nazwisko: "<<name<<" "<<surname
	<<"\nData urodzenia: "<<dateBirthday.dd<<"-"
	<<dateBirthday.mm<<"-"<<dateBirthday.yyyy<<endl;
}

Worker::Worker(int pId, string pName, string pSurname, Date pDateBirthday){
	id=pId;
	name=pName;
	surname=pSurname;
	dateBirthday=pDateBirthday;
}
Worker::Worker(int pId){
	id=pId;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker nowak(8, "Jan", "Nowak", {15,10,2021});
	Worker kowal(4);
	
	Worker*wsk;
	wsk=&nowak;
	cout<<wsk->name<<endl;
	wsk->getData();
	
	Worker*ws;
	ws=&kowal;
	cout<<ws->name<<endl;
	ws->getData();
	
	return 0;
}
