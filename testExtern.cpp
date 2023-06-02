#include <iostream>
#include "Extern.h"
using namespace std;

//extern 不需要导入头文件，编译器自动寻找实现？
extern int countExtern(int a, int b);


int mainPTestExtern() {

	cout << "countExtern:" << countExtern(1, 2) << endl;
	cout << "testGlobal:" << testGlobal() << endl;


	//非类中的被static修饰后的函数，不能在定义的文件之外使用？
	//cout << "testGlobal:" << testStaticGlobal() << endl;
	//cout << "testGlobal:" << StaticGlobal::testStaticGlobal() << endl;


	//静态类变量和静态类方法可以在其他文件中被访问到
	cout << "TestStaticClassMember-member:" << TestStaticClassMember::member << endl;
	cout << "TestStaticClassMember-methodMember:" << TestStaticClassMember::methodMember << endl;
	system("pause");
	return 0;
}