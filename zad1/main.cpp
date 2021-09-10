#include <iostream>

using namespace std;
class Worker{
    public:
    string name;
    string surname;
    string personality;
    int year;
    float cm;
    char plec;
    void showAllData();
};

void Worker::showAllData()
{
    cout << "Imiê pracownika: " << name;
    cout << "\nNazwisko pracownika: " <<surname;
    cout << "\nNarodowoœæ pracownika: " << personality;
    cout << "\nRok urodzenia pracownika: " << year;
    cout << "\nWzrost pracownika: " << cm;
    cout << "\nP³eæ pracownika: " ;
    switch(plec){
        case 'm': cout<<"Mê¿czyzna";
    };
    switch(plec){
        case 'w': cout<<"Kobieta";
    };
};
    int main()
{
    setlocale(LC_CTYPE, "polish");

    Worker pracownik1;
    pracownik1.surname = "Nowak";
    pracownik1.name = "Krystian";
    pracownik1.year = 2006;
    pracownik1.personality = "Polska";
    pracownik1.cm = 180,3;
    pracownik1.plec = 'm';
    pracownik1.showAllData();
    return 0;
}
