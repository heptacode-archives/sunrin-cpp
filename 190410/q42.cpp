#include<iostream>
#include<string>
using namespace std;
class Account {
public:
	string owner;
	int id, balance;
  Account(string _owner, int _id, int _balance){
		owner = _owner;
		id = _id;
		balance = _balance;
	}
	void deposit(int _amount){
		balance += _amount;
	}
	string getOwner(){
		return owner;
	}
	int inquiry(){
		return balance;
	}
	int withdraw(int _balance){
		balance -= _balance;
		if (balance < _balance){
			balance = 0;
			return balance;
		}
		else
			return balance;
	}
};


int main(){
	Account a("sunrin", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << " balance: " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << " banance: " << a.inquiry() << endl;
}