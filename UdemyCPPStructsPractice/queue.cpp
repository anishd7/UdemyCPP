#include <iostream>
using namespace std;


struct queue {
	int q[1000]{};
	int len;
	queue() {
		// default constructor
		len = 0;
	}

	void add_end(int value) {
		q[len++] = value;
	}

	void add_front(int value) {
		for (int j=len; j > 0; --j)
			q[j] = q[j - 1];
		q[0] = value;
		++len;
	}

	int remove_front() {
		int temp = q[0];
		for (int j = 0; j < len; ++j)
			q[j] = q[j + 1];
		--len;
		return temp;
	}

	void print() {
		for (int i = 0; i < len; ++i)
			cout << q[i] << " ";
		cout << endl;
	}

	int length() {
		return len;
	}
};

int main1() {
	queue q;
	q.add_end(7);
	q.add_end(5);
	q.add_end(3);
	q.print();
	q.add_front(1);
	q.add_front(2);
	q.print();
	cout << q.length() << endl;
	for (int i = 0; i < 5; ++i)
		cout << q.remove_front() << " ";
	cout << endl;
	cout << q.length() << endl;
	for (int i = 0; i < 10; ++i)
		cout << q.remove_front() << " ";
	cout << endl;
	q.add_front(1);
	q.add_front(2);
	q.add_front(5);
	cout << q.length() << endl;
	q.print();
	return 0;
}