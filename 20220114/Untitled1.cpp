#include <iostream>

using namespace std;

class Worker{
	private:
		string name {""}, surname {""};
	public:
		void setName(string pName){
			name = pName;
		}
		
		void setSurname(string pSurname){
			surname = pSurname;
		}
		
		string getName(){
			return name;
		}
		
		string getSurname(){
			return surname;
		}
		
		string getData(){
			return name + " " + surname + "\n";
		}
};

class Teacher: public Worker {
	private:
		string schoolSubject {""};
	public:
		void setSchoolSubject(string pSchoolSubject){
			schoolSubject = pSchoolSubject;
		}
		
		string getSchoolSubject(){
			return schoolSubject;
		}
		
		string getDat(){
			return getName() + " " + getSurname() + " " + getSchoolSubject() + "\n";
		}
};

class Supervisor: public Teacher {
	
};

int main(){
	setlocale (LC_CTYPE, "polish");
	
	Worker pracownik;
	pracownik.setName("Janusz");
	pracownik.setSurname("Nowak");
	cout << pracownik.getData();
	
	Teacher nauczyciel;
	nauczyciel.setName("XD");
	nauczyciel.setSurname("JD");
	nauczyciel.setSchoolSubject("matma");
	cout << nauczyciel.getDat();
	
	return 0;
}
