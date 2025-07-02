#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

//Exercise 1
// 2) глобальні перерахування enum
//enum Color
//{
//	Black = 0,
//	Blue = 1,
//	Green = 2,
//	Cyan = 3,
//	Red = 4,
//	Purple = 5,
//	Yellow = 6,
//	White = 7
//};
//
//// 3) прототипи функцій
//void Line(int size, char symb, int color, bool direction);
//void save_file();
//void new_game();
//void menu();
//void intro();
//int main();
//
//// 4) точка входу мейн
//int main() {
//	intro();
//	// Line(25, '@', 12, false);
//	// Line(25, '#', 14, false);
//	// Line(25, '%', 10, false);
//}
//
//// 5) всі інші функції
//
//void Line(int size, char symb, int color, bool direction)
//{
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(h, color);
//	for (int i = 0; i < size; i++)
//	{
//		cout << symb;
//		if (direction) cout << "\n";
//	}
//	SetConsoleTextAttribute(h, 15);
//}
//
//void save_file() {
//	cout << "SAVING...\n";
//	menu();
//}
//
//void new_game() {
//	cout << "NEW GAME\n";
//	save_file();
//}
//
//void menu() {
//	cout << "MENU\n";
//	new_game();
//}
//
//void intro() {
//	cout << "ZASTAVKA\n";
//	menu();
//}


//Exercise 2
//int main() {
//	// cout << local << "\n";
//
//	int local = 10;
//	cout << local << "\n";
//
//	if (true) {
//		int local = 15;
//		cout << local << "\n"; // 15
//	} // при виході з області видимості, змінні що були створені в цій області, перестають існувати
//	cout << local << "\n"; // 15
//}


//Exercise 3
//int global = 30;
//
//void test() {
//	int local = 20;
//	cout << local << "\n"; // 20
//	cout << &local << "\n"; // адреса
//} // при виході з функції, всі локальні змінні, що створені всередині цієї ф-ції, перестають існувати
//
//int main() {
//	int local = 10; // локальна змінна функції мейн
//	cout << local << "\n"; // 10
//	cout << &local << "\n"; // адреса
//	test();
//	cout << local << "\n";
//}


//Exercise 4
//void test() {
//	static int local = 0; // змінна з локальною областю видимості, але з глобальним терміном життя
//	local++; // 1 2 3
//	cout << local << "\n"; // 1 2 3
//}
//
//int main() {
//	test(); // 1
//	test(); // 1
//	test(); // 1
//}