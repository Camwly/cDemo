#include <iostream>
#include<string>
using namespace std;


class TestA {
public:
	TestA() {
		cout << "���캯��" << endl;
	}
	~TestA() {
		cout << "���캯��" << endl;
	}

};



int mainP��̬() {

	int* a = new int[10];
	int* b = new int;
	TestA *ta = new TestA();
	delete ta;

	

	system("pause");
	return 0;
}

//new ������ڴ�ռ���Ҫʹ��ָ��������