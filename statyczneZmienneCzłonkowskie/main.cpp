#include <iostream>

using namespace std;

class School {
    public:
    static string s_school;
    static string s_jobPosition;

    string name;
    string surname;

    void getData();
    void setNameSurname(string name, string surname, string s_school);

    static string s_getSchool();
    static void s_setSchool(string pSchool){
    s_school=pSchool;
    }
};

string School::s_school="ZSK";
string School::s_jobPosition="Student";

void School::setNameSurname(string pName, string pSurname, string s_school){
    name=pName;
    surname=pSurname;
    School::s_school=s_school;
}

string School::s_getSchool(){
    return s_school;
}

void School::getData(){
cout<<"Imię i nazwisko: "<<name<<" "<<surname<<"\nSzkoła: "<<s_school<<"\n";
}

int main(){
    setlocale(LC_CTYPE, "polish");
    cout<<School::s_school<<endl;
    cout<<School::s_jobPosition<<endl;

    School kowal;
    kowal.setNameSurname("Jan", "Kowalski", "CDV");
    kowal.getData();

    School::s_school="ZSŁ";
    kowal.getData();
    School::s_school="ZSK";
    kowal.getData();
    cout<<School::s_school;
    return 0;
}
