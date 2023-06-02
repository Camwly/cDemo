#include <iostream>
#include "Extern.h"
using namespace std;



int countExtern(int a, int b) {
	return a + b;
}

 int testGlobal() {

	return 2;
}

	 //对于被 static 修饰的函数，在定义的文件之外是无法直接访问和调用的。 static 关键字将函数限定在当前文件的作用域内，使其成为一个局部函数
	 //这种用法主要用于实现文件内部的辅助函数或实用函数，以避免函数与其他文件中的同名函数产生冲突，并且隐藏函数的实现细节
	 static int testStaticGlobal() {
		 return 3;
	 }


	 int TestStaticClassMember::member = 10;
	 int TestStaticClassMember::methodMember() {
		 return 9;
 }

