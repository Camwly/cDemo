#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex lockObj;
int count = 0;

void countNum() {
	lock_guard<mutex>lock(lockObj);
	for (int i = 0; i < 5; i++) {
		std::this_thread::sleep_for(std::chrono::seconds(1));
		::count++;
		cout << "count:" << ::count << endl;

	}
}



void testThread() {
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << "test thread" << std::endl;

}


int mainPÏß³Ì() {
	using namespace std;

	thread mythread1(countNum);

	thread mythread2(countNum);

	mythread1.join();
	mythread2.join();

	cout << "switch to main thread" << endl;

	system("pause");
	return 0;
}