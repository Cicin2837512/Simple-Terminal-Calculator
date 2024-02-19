#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	const string errorMessagePrefix = "error: calc: ";
	if (argc == 4) {
		try {
			const char *argv1 = argv[1];
			const double num1 = stod(argv1);
			
			const char *argv2 = argv[2];
			const string operator1 = string(argv2);
			
			const char *argv3 = argv[3];
			const double num2 = stod(argv3);
			if (operator1 == "+") {
				cout << num1 + num2;
			} else if (operator1 == "-") {
				cout << num1 - num2;
			} else if (operator1 == "*" || operator1 == "x" || operator1 == ".") {
				cout << num1 * num2;
			} else if (operator1 == "/") {
				cout << num1 / num2;
			} else {
				cout << errorMessagePrefix << "Wrong syntax";
				return 1;
			}
			cout << endl;
		} catch (const invalid_argument& e) {
			cerr << errorMessagePrefix << "Invalid argument: " << e.what();
			cout << endl;
			return 1;
		} catch (const out_of_range& e) {
			cerr << errorMessagePrefix << "Out of range: " << e.what();
			cout << endl;
			return 1;
		}
	} else {
		cerr << errorMessagePrefix << "Wrong number of arguments!" << "\n";
		cout << "hint: calc <number1> <operation> <number2>";
		cout << endl;
		return 1;
	}
	return 0;
}
