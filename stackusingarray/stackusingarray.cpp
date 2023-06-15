#include <iostream>
#include <string>
using namespace std;
 
class program {
private:
	string stack_array[5];
	int top;
public:
	program() {
		top = -1;
	}
	string push(string element) {
		if (top == 4) {
			cout << "stack full" << endl;
			return "";
		}
		top++;
		stack_array[top] = element;
		cout << endl;
		cout << element << ": ditambahkan(pushed)" << endl;

		return element;
	}
	void pop() {
		if (empty()) {
			cout << "stack empty cannot pop" << endl;
			return;
		}
		cout << "the popped element is : " << stack_array[top] << endl;
		top--;
	}
	bool empty() {
		return (top == -1);
	}
	void display() {
		if (empty()) {
			cout << "\nstack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};
int main() {
	program s;

	while (true) {
		cout << endl;
		cout << "\n * **stack menu * **\n";
		cout << "1.push\n";
		cout << "2.pop\n";
		cout << "3.display\n";
		cout << "4.exit\n";
		cout << "\nenter your choice: ";
		string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
		switch (ch) {
		case '1': {
			cout << "\nenter an element:" << endl;
			string element;
			getline(cin, element);
			s.push(element);
			break;
		}
		case '2':
			if (s.empty()) {
				cout << "\nstack is empty" << endl;
				break;
			}
			s.pop();
			break;

		case '3':
			s.display();
			break;

		case'4' :
			return 0;

		default:
			cout << "\ninvalid choice." << endl;
			break;
		}

	}
}


