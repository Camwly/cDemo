#include <iostream>
#include <string>
using namespace std;

class MyException :public exception {
public:
	const char* what() const throw() override {
		return "MyException";
	}
};

void testExecpiton(int num) throw() {
	if (num == 0) {
		throw runtime_error("can not be zero");
	}
	if (num >= 1) {
		throw invalid_argument("argument error,can not gather than 1");
	}

	if (num <= -4) {
		throw MyException();
	}

	if (num <= -3) {
		throw "can not be less than 0";
	}

	if (num <= -2) {
		throw -2;
	}
}

int mainP异常() {
	int a;
	cin >> a;
	try
	{
		testExecpiton(a);

	}
	catch (const std::exception& e)
	{
		cout << "error:" << e.what() << endl;
	}
	catch (MyException e1) {
		cout << "error:" << e1.what() << endl;
	}
	catch (const char* e) {
		cout << "error:" << e << endl;
	}
	catch (const int e) {
		cout << "error:" << e << endl;
	}
	system("pause");
	return 0;
}

//在 C++ 中，与其他一些编程语言（如 Java）不同，没有明确的 "检查时异常" 概念。在 C++ 中，异常处理是一种运行时机制，而不是编译时机制。
