#include <iostream>
#include <string>
using namespace std;


class A {
public:
	A operator+(const A& a) {
		A b(0,0);
		b.with = a.with + with;
		b.height = a.height + height;
		return b;

	}

	bool operator==(const A& a) {
	
		return with == a.with && height == a.height;
	
	}


public:
	int with;
	int height;
	A(int with, int height) {
		A::with = with;
		A::height = height;
	}
};


int mainP÷ÿ‘ÿ() {

	A a(1, 1);
	A b(2, 2);
	A c = a + b;

	cout << "c:with" << c.with << "c:height:" << c.height << endl;
	cout << "a==b?" << (a == b) << endl;
	system("pause");
	return 0;
}