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



int mainP指针() {

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

	//指针算术运算
	int arr[10] = { 1,2,3,4,5,6 };
	int* pt = arr;
	for (int i = 0; i < 5; i++) {
		cout << "第" << i << ":" << *pt << endl;
		pt++;
	}



	//判断空指针
	int* pa = NULL;
	cout << "pa:" << pa << endl;

	if (!pa)
	{
		cout << "null point" << endl;
	}
	else {
		cout << "not null point" << endl;
	}

	//指针的指针
	int b = 100;
	int* pb = &b;
	int** pbb = &pb;
	cout << "*pb" << *pb << endl;
	cout << "**pbb" << **pbb << endl;

	//函数返回指针
	int* pp = testPoint();
	for (int i = 0; i < 10; i++) {
		cout << "第" << i << ":" << *pp << endl;
		pp++;
	}

	system("pause");

	return 0;
}