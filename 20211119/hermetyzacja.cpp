#include <iostream>
using namespace std;
class Account {
	private:
		float balance = 1000;
		float debit = 100;
		float credit = 2000;
		
	public:
		int getBalance();
		int withdraw(float money);
		int deposite(float money);
		int withdrawDebit(float money);
};

int Account::getBalance() {
	return balance;
}

int Account::withdraw(float money){
	if (money>0){
		if(money<=balance){
			balance-=money;
			return money;
		}
		else {
			return 0;
		}
	}
		else {
		return 0;
	}
}
int Account::deposite(float money){
	if(money>0){
		balance+=money;
		return money;
	}
	else{
		return 0;
	}
}

int Account::withdrawDebit(float money){
	if (money>0){
		if(money<=(balance+debit)){
			balance-=money;
			return money;
		}
		else {
			return 0;
		}
	}
		else {
		return 0;
	}
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Account k1;
	cout<<"Stan konta: "<<k1.getBalance()<<" z³"<<endl;
	cout<<"Wyp³acono z konta: "<<k1.withdraw(50)<<endl;
	cout<<"Stan konta: "<<k1.getBalance()<<" z³"<<endl;
	cout<<"Wp³acono na konto: "<<k1.deposite(15)<<endl;
	cout<<"Stan konta: "<<k1.getBalance()<<" z³"<<endl;
	cout<<"Wyp³acono z konta: "<<k1.withdrawDebit(1050)<<endl;
	cout<<"Stan konta: "<<k1.getBalance()<<" z³"<<endl;
	return 0;
}
