#include <iostream>
#include "Extern.h"
using namespace std;



int countExtern(int a, int b) {
	return a + b;
}

 int testGlobal() {

	return 2;
}

	 //���ڱ� static ���εĺ������ڶ�����ļ�֮�����޷�ֱ�ӷ��ʺ͵��õġ� static �ؼ��ֽ������޶��ڵ�ǰ�ļ����������ڣ�ʹ���Ϊһ���ֲ�����
	 //�����÷���Ҫ����ʵ���ļ��ڲ��ĸ���������ʵ�ú������Ա��⺯���������ļ��е�ͬ������������ͻ���������غ�����ʵ��ϸ��
	 static int testStaticGlobal() {
		 return 3;
	 }


	 int TestStaticClassMember::member = 10;
	 int TestStaticClassMember::methodMember() {
		 return 9;
 }

