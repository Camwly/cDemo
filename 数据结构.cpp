#include <iostream>
#include<string>
using namespace std;

struct Book {
	string name;
	int page;
	float price;
}book;


int mainP½á¹¹() {
	book.name = "good";
	book.page = 100;
	book.price = 10.0f;
	cout << "book name;" << book.name << endl;

	Book book2;
	book2.name = "test";
	cout << "book2 name:" << book2.name << endl;

	Book *p = &book2;
	cout << "p name:" << p->name << endl;



	system("pause");
	return 0;
}