#include <iostream>
using namespace std;

struct Date{
	int dd, mm, yyyy;
};

class Osoba{
	private:
		float dochody;
	public:
		string name, surname;
		Date birthDate;
		int wiek;
		
		void setDochody(float pDochody);
		float getDochody();
};

class Worker: public Osoba{
	private:
		float dochody;
		float pensja;
	public:
		string badaniaLekarskie;
		
		void setDochody(float pDochody);
		float getDochody();
		
		void setPensja(float pPensja);
		float getPensja();
};

class Student: public Osoba{
	private:
		float dochody;
		float stypendium;
	public:
		int ID;
		
		void setDochody(float pDochody);
		float getDochody();
		
		void setStypendium(float pStypendium);
		float getStypendium();
};

class Emeryt: public Osoba{
	private:
		float dochody;
		float emerytura;
	public:
		void setDochody(float pDochody);
		float getDochody();
		
		void setEmerytura(float pEmerytura);
		float getEmerytura();
};

int main(int argc, char** argv) {
	
	return 0;
}
