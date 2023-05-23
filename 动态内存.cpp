#include <iostream>
#include<string>
using namespace std;


class TestA {
public:
	TestA() {
		cout << "构造函数" << endl;
	}
	~TestA() {
		cout << "释造函数" << endl;
	}

};



int mainP动态() {

	int* a = new int[10];
	int* b = new int;
	TestA *ta = new TestA();
	delete ta;

	

	system("pause");
	return 0;
}

//new 分配的内存空间需要使用指针来接收