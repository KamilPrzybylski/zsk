#include <iostream>
using namespace std;

struct Date
{
    unsigned short int d, m, rrrr;
};

struct Student
{
    string name, surname;
    unsigned int id;
    Date dateBirthday;
    unsigned short int gradeInformatics[5];
};

int main()
{
    setlocale(LC_CTYPE, "polish");
    Student kowalski{"Janusz","Nowak",1000,{17,9,2021},{4,5,6,3,5}};
    cout << "Dane pracownika:\n" << "Imiê i nazwisko: " << kowalski.name << " " << kowalski.surname << "\nId studenta: " << kowalski.id
         << "\nData urodzenia: " << kowalski.dateBirthday.d << "-" << kowalski.dateBirthday.m << "-" << kowalski.dateBirthday.rrrr << "\nOceny z inf: ";
    for(int i=0;i<5;i++)
        cout << kowalski.gradeInformatics[i]<<" ";
    return 0;
}
