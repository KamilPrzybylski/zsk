#include <iostream>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "polish");
	
	ofstream File;
	//File.open("plik.txt")
//ścieżka bezwzględna	
	File.open("C:\\Users\\student\\Desktop\\vhjuki\\plik.txt");
	if(File.is_open()){
		//cout<<"ok"<<endl;
		cout<<"Imię i nazwisko"<<endl;
		string iin;
		getline(cin, iin);
		File<<iin;
	}
	else{
		cout<<"error"<<endl;
	}
	return 0;
}
