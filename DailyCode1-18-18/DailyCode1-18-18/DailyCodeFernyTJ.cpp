#include <iostream>
using namespace std;

int input;
int main() {
	while (true) {
		cout << "I'll give you the cubic of an input integer" << endl;
		cin >> input;
		input = input * input * input;
		cout << "Your number is " << input << endl;
	}
	return 0;
}