#include<iostream>
#include<string>
#include <vector>
using namespace std;




class P {


};

int* testPoint() {
	static int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}
	return arr;
}

int sum(int a, int b) {

	return a + b;
}

int mainPָ��() {


	//����ָ��
	int (*p)(int, int) = sum;
	p(1, 2);
	auto pt = sum;
	pt(2, 3);


	const char* cArr[3] = { "hello 1", "hello 2","hello 3" };

	//char *bArr[3]= { "hello 1", "hello 2","hello 3" };

	char dArr[10] = "abcd";
	/*
		char* c = dArr;
		cout << "c:" << c << endl;
		cout << "dArr:" << dArr << endl;
		int a = 10;
		int* p = &a;
		*p = 11;
		cout << "p:" << p << endl;
		string str = "hello world";
		cout << "str:" << str << endl;
		cout << "a:" << a << endl;
		P h;
		cout << "p:" << &h << endl;*/

	//ָ����������
	int arr[10] = { 1,2,3,4,5,6 };
	int* pr = arr;
	for (int i = 0; i < 5; i++) {
		cout << "��" << i << ":" << *pr << endl;
		pr++;
	}



	//�жϿ�ָ��
	int* pa = NULL;
	cout << "pa:" << pa << endl;

	if (!pa)
	{
		cout << "null point" << endl;
	}
	else {
		cout << "not null point" << endl;
	}

	//ָ���ָ��
	int b = 100;
	int* pb = &b;
	int** pbb = &pb;
	cout << "*pb" << *pb << endl;
	cout << "**pbb" << **pbb << endl;

	//��������ָ��
	int* pp = testPoint();
	for (int i = 0; i < 10; i++) {
		cout << "��" << i << ":" << *pp << endl;
		pp++;
	}

	system("pause");

	return 0;
}