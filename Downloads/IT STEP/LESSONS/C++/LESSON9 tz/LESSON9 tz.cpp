#include "Alexey.h"

void change(int x) {
	x++;
}

int main() {
	int test = 10;
	cout << test << "\n"; // 10
	change(test);
	cout << test << "\n"; // 11
	change(test);
	cout << test << "\n"; // 12
}