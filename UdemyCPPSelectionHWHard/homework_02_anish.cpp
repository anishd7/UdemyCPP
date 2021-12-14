using namespace std;
#include <iostream>

int main() {
	int s1, e1, s2, e2;
	cin >> s1 >> e1 >> s2 >> e2;

	// first get into sorted order by start
	if (s1 > s2) {
		int temp = s1;
		s1 = s2;
		s2 = temp;
		temp = e1;
		e1 = e2;
		e2 = temp;
	}

	// check if they dont intersect at all
	if (s2 > e1) {
		cout << -1 << endl;
	}
	else {
		// partial intersection will be [max(s1, s2), min(e1, e2)]. However, since the intervals are sorted, s2 will always be >= s1, so the start
		// of the intersection is definitely s2. The end depends on which is larger, e1 or e2. 
		int end;
		if (e1 < e2) {
			end = e1;
		}
		else {
			end = e2;
		}
		cout << s2 << " " << end << endl;
	}

	return 0;
}