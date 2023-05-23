#include <iostream>
#include <string>
using namespace std;


class A {
public:
	virtual int sum() = 0;
};

class B :public A {

public:
	int sum() {
		return 1;
	}

};

class C :public A {
public:
	int sum() {

		return 2;
	}
};

int test(A &a) {
	return a.sum();
}

int mainP¶àÌ¬() {
	B b;
	C c;

	cout << "B:" << test(b) << endl;
	cout << "C:" << test(c) << endl;

	system("pause");

	return 0;
}