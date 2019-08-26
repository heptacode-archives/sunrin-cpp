#include<iostream>
#include<string>
using namespace std;

class Account {
	string name; // �̸�
	int id;      // ���¹�ȣ
	int balance; // �ܾ�
public:
	Account(string n, int i, int b) {
		name = n;
		id = i;
		balance = b;
	}
	string getOwner() {
		return name;
	}
	void deposit(int won) {
		balance += won;
	}
	int withdraw(int won) {
		// ��ݾ�
		if (won >= balance)
			won = balance;
		balance -= won;
		return won;
	}
	int inquiry() {
		return balance;
	}
};

int main() {
	Account a("sunrin", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << " balance: " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << " balance: " << a.inquiry() << endl;
}