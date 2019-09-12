#include<iostream>
#include<string>
using namespace std;
class Software { // 소프트웨어
	int price; // 소프트웨어의 가격
	float version; // 소프트웨어의 버전
	bool isFinished; // 소프트웨어의 완성 여부
	string developer; // 소프트웨어의 개발자
public:
	void setPrice(int _price) {
		price = _price;
	}
	void setVersion(float _version) {
		version = _version;
	}
	void setFinished(bool _isFinished) {
		isFinished = _isFinished;
	}
	void setDeveloper(string _developer) {
		developer = _developer;
	}
	void print() {
		cout << "Software price = " << price << ", version = " << version << ", isFinished = " << isFinished << ", developer = " << developer << endl;
	}
};
class SoftwareBuilder : public Software {
	Software software;
public:
	SoftwareBuilder() {
		software = Software();
	}
	Software getSoftware() {
		return software;
	}
	void setPrice(int price) {
		software.setPrice(price);
	}
	void setVersion(float version) {
		software.setVersion(version);
	}
	void setFinished(bool isFinished) {
		software.setFinished(isFinished);
	}
	void setDeveloper(string developer) {
		software.setDeveloper(developer);
	}
};
void main() {
	SoftwareBuilder builder = SoftwareBuilder();
	builder.setPrice(10000);
	builder.setVersion(1.1);
	builder.setFinished(false);
	builder.setDeveloper("Hyunwoo Kim");

	Software software = builder.getSoftware();
	software.print();
}