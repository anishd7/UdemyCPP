#include <iostream>
#include <string>
using namespace std;

int main() {
	const int MAX = 10000;
	string name[MAX]{};
	char gender[MAX]{};
	int age[MAX]{};
	int salary[MAX]{};

	int ni = 0, gi = 0, ai = 0, si = 0;
	while (true) {
		cout << "Enter your choice:\n";
		cout << "1) Add new employee\n";
		cout << "2) Print all employees\n";
		cout << "3) Delete by age\n";
		cout << "4) Update salary by name\n";

		int input;
		cin >> input;

		if (input == 1) {
			string n;
			char g;
			int s, a;
			cout << "Enter name: ";
			cin.ignore();
			getline(cin, n);
			cout << "Enter age: ";
			cin >> a;
			cout << "Enter salary: ";
			cin >> s;
			cout << "Enter gender (M/F): ";
			cin >> g;
			name[ni++] = n;
			gender[gi++] = g;
			age[ai++] = a;
			salary[si++] = s;
		}
		else if (input == 2) {
			for (int i = 0; i < ai; ++i) {
				if (name[i] != "")
					cout << name[i] << " ";
				if (age[i] != -1)
					cout << age[i] << " ";
				if (salary[i] != -1)
					cout << salary[i] << " ";
				if (gender[i] != '\0')
					cout << gender[i] << endl;
			}
		}
		else if (input == 3) {
			int first, second;
			cout << "Enter start and end age: ";
			cin >> first >> second;
			for (int i = 0; i < MAX; ++i) {
				if (first <= age[i] && age[i] <= second) {
					age[i] = -1;
					gender[i] = '\0';
					salary[i] = -1;
					name[i] = "";
				}
			}
		}
		else if (input == 4) {
			string n;
			int s;
			cout << "Enter name and salary: ";
			cin.ignore();
			getline(cin, n);
			cin >> s;
			int i = 0;
			for (; i < MAX; ++i)
				if (name[i] == n)
					break;
			salary[i] = s;
		}
	}
	return 0;
}