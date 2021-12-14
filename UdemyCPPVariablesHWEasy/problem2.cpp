#include <iostream>
using namespace std;

int main2() {
	string name, name2;
	int id, id2;
	double grade, grade2;

	cout << "What is student 1's name?: ";
	cin >> name;
	cout << "What is student 1's id?: ";
	cin >> id;
	cout << "What is student 1's grade?: ";
	cin >> grade;

	cout << "What is student 2's name?: ";
	cin >> name2;
	cout << "What is student 2's id?: ";
	cin >> id2;
	cout << "What is student 2's grade?: ";
	cin >> grade2;

	cout << "Student's grades in math: \n";
	cout << name << " (with id " << id << " ) got grade " << grade << endl;
	cout << name2 << " (with id " << id2 << " ) got grade " << grade2 << endl;
	cout << "average grade is: " << (grade + grade2) / 2 << endl;
	return 0;
}