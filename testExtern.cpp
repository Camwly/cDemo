#include <iostream>
#include "Extern.h"
using namespace std;

//extern ����Ҫ����ͷ�ļ����������Զ�Ѱ��ʵ�֣�
extern int countExtern(int a, int b);


int mainPTestExtern() {

	cout << "countExtern:" << countExtern(1, 2) << endl;
	cout << "testGlobal:" << testGlobal() << endl;


	//�����еı�static���κ�ĺ����������ڶ�����ļ�֮��ʹ�ã�
	//cout << "testGlobal:" << testStaticGlobal() << endl;
	//cout << "testGlobal:" << StaticGlobal::testStaticGlobal() << endl;


	//��̬������;�̬�෽�������������ļ��б����ʵ�
	cout << "TestStaticClassMember-member:" << TestStaticClassMember::member << endl;
	cout << "TestStaticClassMember-methodMember:" << TestStaticClassMember::methodMember << endl;
	system("pause");
	return 0;
}