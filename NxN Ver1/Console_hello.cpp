#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	double x, y, result;
	char oper;

	Calculator c;
	while (true) {
		char ch;
		cout << "�п�J�B�⦡: ";
		cin >> x >> oper >> y;
		result = c.Calculate(x, oper, y);
		cout << "Result: " << result << endl;
		cout << "�O�_�~��? (y/n) ";
		cin >> ch;
		if (ch == 'y') {
			cout << "Continue..." << endl;
			cout << "Go..." << endl;
		}
		else break;
	}
}