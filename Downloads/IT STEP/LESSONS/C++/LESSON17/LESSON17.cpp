#include <iostream>
using namespace std;

//struct Date {
//	char a; // 1
//	int day; // 4
//	int month; // 4
//	int year; // 4
//	char b; // 1
//}; // alignment - вирівнювання
//
//int main() {
//	cout << sizeof(char) << "\n"; // 1
//	cout << sizeof(Date) << "\n"; // 14 >>>> 20
//
//}


// бітове поле
struct Date {         
	unsigned short day : 5; // 1-31 (0...31)
	unsigned short month : 4; // 1-12 (0...15)
	unsigned short year : 12; // 1900-2125 (0...4095)
	unsigned short hours : 5; // 0-23 (0...31)
	unsigned short minutes : 6; // 0-59 (0...63)
	unsigned short seconds : 6; // 0-59 (0...63)
	unsigned short milliseconds : 10; // 0-999 (0...1023)
};

int main() {
	cout << sizeof(Date) << "\n"; // 8

}
