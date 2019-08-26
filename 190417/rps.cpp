#include<iostream>
#include<string>
using namespace std;
string s;
class RPS {
	string tom, jack;
public:
	void set(string _tom, string _jack){
		tom = _tom;
		jack = _jack;
	}
	void result(){
		if ((tom == "scissors") && (jack == "paper")){
			cout << "Tom wins." << endl;
		}
		else if ((tom == "scissors") && (jack == "rock")){
			cout << "Jack wins." << endl;
		}
		else {
			cout << "Nobody wins." << endl;
		}
	}

};
int main() {
	RPS rps;
	string tom, jack;
	cout << "Tom>> ";
	cin >> tom;
	cout << "Jack>> ";
	cin >> jack;
	rps.set(tom, jack);
	rps.result();
}
