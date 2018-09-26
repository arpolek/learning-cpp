#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	cout << "hello world!" << endl;
	int a, b;
	cout << "Provide first int: ";
	cin >> a;
	cout << "Provice second int: ";
	cin >> b;
	if (a > b) {
		cout << "First number is bigger!";
	}
	else {
		cout << "Second number is bigger!";
	}
	cin.get();
	getchar();
}
