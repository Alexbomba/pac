#include <iostream>
#include <windows.h>
using namespace std;

//1
//int main()
//{
//	srand(time(0));
//	rand();
//
//	// ASCII characters table 
//	for (int i = 0; i < 256; i++)
//	{
//		cout << (char)i << " - " << i << "\n";
//	}


//2
//int main()
//
//{
//
//	srand(time(0));
//
//	rand();
//
//	// ASCII characters table 
//
//	// for (int i = 0; i < 256; i++)
//
//	// {
//
//	// 	cout << (char)i << " - " << i << "\n";
//
//	// }
//
//	// hide cursor
//
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	CONSOLE_CURSOR_INFO cursor;
//
//	cursor.bVisible = false;
//
//	cursor.dwSize = 100; // 1-100
//
//	SetConsoleCursorInfo(h, &cursor);
//
//	cout << "\n Loading, please wait...\n ";
//
//	for (int i = 0; i < 100; i++)
//
//	{
//
//		cout << (char)178;
//
//		Sleep(rand() % 500);
//
//	}
//
//	cout << "\n";
//
//}


//3
//int main()
//
//{
//
//	srand(time(0));
//
//	rand();
//
//	// ASCII characters table 
//
//	// for (int i = 0; i < 256; i++)
//
//	// {
//
//	// 	cout << (char)i << " - " << i << "\n";
//
//	// }
//
//	// hide cursor
//
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // terminal window descriptor (number)
//
//	CONSOLE_CURSOR_INFO cursor;
//
//	cursor.bVisible = false;
//
//	cursor.dwSize = 100; // 1-100
//
//	SetConsoleCursorInfo(h, &cursor);
//
//	cout << "\n Loading, please wait...\n ";
//
//	COORD percent;
//
//	percent.X = 25;
//
//	percent.Y = 1;
//
//	COORD progress;
//
//	progress.X = 1;
//
//	progress.Y = 2;
//
//	for (int i = 0; i < 100; i++)
//
//	{
//
//		SetConsoleCursorPosition(h, progress);
//
//		SetConsoleTextAttribute(h, 14); // 0-255
//
//		cout << (char)178;
//
//		progress.X++;
//
//		SetConsoleCursorPosition(h, percent);
//
//		SetConsoleTextAttribute(h, 12);
//
//		cout << i << "%";
//
//		Sleep(rand() % 200);
//
//	}
//
//	cout << "\n";
//
//	SetConsoleCursorPosition(h, percent);
//
//	cout << "100%";
//
//	Sleep(INFINITE);
//
//}



//4
//int main()
//{
//	for (int j = 0; j < 3; j++)
//	{
//		for (int i = 0; i < 20; i++)
//		{
//			cout << (char)178;
//			Sleep(50);
//		}
//		cout << "\n";
//	}
//
//
//
//}


//5
//int main()
//{
//	int pause = 100;
//
//	int width = 20; // кількість стовпчиків (columns)
//	int height = 5; // кількість рядків (rows)
//
//	for (int y = 0; y < height; y++) // outer loop (зовнішній цикл) - перебір рядків
//	{
//		for (int x = 0; x < width; x++) // inner loop (внутрішній цикл) - перебір комірок (стовпчиків) в межах того чи іншого рядка
//		{
//			cout << (char)178;
//			// cout << x << " " << y;
//			Sleep(pause);
//		}
//		cout << "\n";
//	}
//
//
//
//}


//6
//int main()
//{
//	int pause = 15;
//
//	int width = 13;
//	int height = 13;
//
//	for (int y = 0; y < height; y++) {
//		for (int x = 0; x < width; x++) {
//			if (x == 0)
//				cout << (char)178;
//			else
//				cout << ".";
//			Sleep(pause);
//		}
//		cout << "\n";
//	}
//
//
//
//}


//7
//int main()
//{
//	int pause = 15;
//
//	int width = 13;
//	int height = width;
//
//	for (int y = 0; y < height; y++) {
//		for (int x = 0; x < width; x++) {
//			if (x == 0 || y == 0 || y == height - 1)
//				cout << (char)178;
//			else
//				cout << ".";
//			Sleep(pause);
//		}
//		cout << "\n";
//	}
//
//
//
//}


//8
//int main()
//
//{
//
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	int pause = 5;
//
//	int width = 13;
//
//	int height = width;
//
//	for (int y = 0; y < height; y++) {
//
//		for (int x = 0; x < width; x++) {
//
//			if (x == 0 || y == 0 ||
//
//				x == width - 1 || y == height - 1) {
//
//				SetConsoleTextAttribute(h, 12);
//
//				cout << (char)178;
//
//			}
//
//			else {
//
//				SetConsoleTextAttribute(h, 9);
//
//				cout << ".";
//
//			}
//
//			Sleep(pause);
//
//		}
//
//		cout << "\n";
//
//	}
//
//
//
//}


//9
//int main()
//
//{
//
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	int pause = 5;
//
//	int width = 13;
//
//	int height = width;
//
//	for (int y = 0; y < height; y++) {
//
//		for (int x = 0; x < width; x++) {
//
//			if (x == 0 || y == 0 ||
//
//				x == width - 1 || y == height - 1 ||
//
//				x == y || x + y == width - 1) {
//
//				SetConsoleTextAttribute(h, 12);
//
//				cout << (char)178;
//
//			}
//
//			else {
//
//				SetConsoleTextAttribute(h, 9);
//
//				cout << ".";
//
//			}
//
//			Sleep(pause);
//
//		}
//
//		cout << "\n";
//
//	}
//
//
//
//}


//10
//int main()
//{
//	srand(time(0));
//
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	int pause = 5;
//
//	int width = 35;
//	int height = 15;
//	for (int y = 0; y < height; y++) {
//		for (int x = 0; x < width; x++) {
//			if (x == 0 && y == 2 ||
//				x == width - 1 && y == height - 3) {
//				cout << " ";
//			}
//			else if (x == 0 || y == 0 ||
//				x == width - 1 || y == height - 1) {
//				SetConsoleTextAttribute(h, 10);
//				cout << (char)178;
//			}
//			else {
//				// 0 - hall
//				// 1 - wall
//				// 2 - coin
//				// 3 - enemy
//				int object = rand() % 4; // 0 1 2 3 
//				if (object == 0)
//					cout << " ";
//				else if (object == 1) {
//					SetConsoleTextAttribute(h, 10);
//					cout << (char)178;
//				}
//				else if (object == 2) {
//					SetConsoleTextAttribute(h, 14);
//					cout << ".";
//				}
//				else if (object == 3) {
//					SetConsoleTextAttribute(h, 12);
//					cout << (char)1;
//				}
//			}
//
//
//			Sleep(pause);
//		}
//		cout << "\n";
//	}
//
//
//
//}