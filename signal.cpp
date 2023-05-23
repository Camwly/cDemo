#include <iostream>
#include<csignal>
#include <thread>

using namespace std;

void signalHandler(int signalNum) {
	cout << "catch signal:" << signalNum << endl;
	exit(signalNum);
}



int mainPsignal() {
	signal(SIGFPE, signalHandler);
	int i = 0;
	do {
		i++;
		this_thread::sleep_for(chrono::seconds(1));
		cout << "sleep_for:"<< endl;
		if (i == 5) {
			raise(SIGFPE);
		}

	} while (true);

		return 0;
}