#include<iostream>
#include<string>
using namespace std;
class Mammal {
	int age;
	double weight;
public:
	void setAge(int age){
		this->age = age;
	}
	void setWeight(double weight){
		this->weight = weight;
	}
	int getAge(){
		return age;
	}
	double getWeight(){
		return weight;
	}
};
class Cat : public Mammal {
	string name;
public:
	Cat(string name){
		this->name = name;
	}
	void show(){
		cout << "name : " << name << endl;
		cout << "age : " << getAge() << endl;
	}
	void speak(){
		cout << "Meow ~" << endl;
	}
};
int main(){
	Cat sunrin("sunrin");
	sunrin.setAge(3);
	sunrin.setWeight(3.14);
	sunrin.show();
	sunrin.speak();
}