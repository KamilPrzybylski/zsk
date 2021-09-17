#include <iostream>
using namespace std;

struct Date{
    unsigned short int dd, mm, yyyy;
};

class Worker {
public:
    unsigned int id {};
    string name {}, surname {};
    Date dateBirthday {};

    void showAllData();
    void setData(unsigned int x, string n, string sn, unsigned short int d, unsigned short int m, unsigned short int y);
};

void Worker::showAllData(){
    cout << "Dane pracownika:\nIdentyfikator: " << id
         << "\nImiE i nazwisko: " << name << " " << surname
         << "\nData urodzenia: " << dateBirthday.dd << " " <<dateBirthday.mm << " " << dateBirthday.yyyy;
}

void Worker::setData(unsigned int x, string n, string sn, unsigned short int d, unsigned short int m, unsigned short int y){
    id=x;
    name=n;
    surname=sn;
    dateBirthday.dd=d;
    dateBirthday.mm=m;
    dateBirthday.yyyy=y;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    Worker kowalski;
    kowalski.setData(10,"Jan","Klowalski",17,9,2021);
    kowalski.showAllData();
    return 0;
}
