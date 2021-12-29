#include <iostream>
#include <unordered_set>

using namespace std;


int main(void) {

	unordered_set<int> A, B;
	int A_size, B_size, temp;

	cin >> A_size >> B_size;

	for (int i = 0; i < A_size; i++) {
		cin >> temp;
		A.insert(temp);
	}
	
	for (int i = 0; i < B_size; i++) {
		cin >> temp;
		B.insert(temp);
	}

	for (auto i : A) {
		if (B.find(i) != B.end()) A_size--;
	}

	for (auto i : B) {
		if (A.find(i) != A.end()) B_size--;
	}

	cout << A_size + B_size;
}
