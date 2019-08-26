#include <iostream>
#include <string>
using namespace std;
class Book {
	char* title = NULL;
public:
	Book(char* t);
	Book(const Book& book);
	~Book() { delete[] title; }
	void set(char* t);
	void show() { cout << title << endl; }
};
Book::Book(char* t) {
	title = new char[strlen(t) + 1];
	strcpy_s(title, strlen(t) + 1, t);
}
Book::Book(const Book& book) {
	title = new char[strlen(book.title) + 1];
	strcpy_s(title, strlen(book.title) + 1, book.title);
}
void Book::set(char* t) {
	if (t != NULL) {
		delete[] title;
	}
	title = new char[strlen(t) + 1];
	strcpy_s(title, strlen(t) + 1, t);
}
int main() {
	Book sunrin("Sunrin");
	Book gamep = sunrin;
	gamep.set("Game");
	sunrin.show();
	gamep.show();
}