#include <iostream>

#include <windows.h>

using namespace std;

//Exercise 1
//void write(string text, int color, short x, short y) {
//
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//    SetConsoleTextAttribute(h, color);
//
//    SetConsoleCursorPosition(h, { x, y });
//
//    cout << text << "\n";
//
//}
//
//int main() {
//
//    write("AAAAAA", 12, 3, 3);
//
//    write("BBBBBB", 10, 5, 5);
//
//    write("CCCCCC", 14, 7, 7);
//
//    write("DDDDDD", 13, 9, 9);
//
//}


//Exercise 2
// функція з двома параметрами за замовчуванням (необов'язковими параметрами)
// якщо передати значення - буде наше значення
// якщо не передати значення - то буде використано те що вказано після =
//void write(string text, int color, short x = 0, short y = 0) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, color);
//    SetConsoleCursorPosition(h, { x, y });
//    cout << text << "\n";
//}
//
//int main() {
//    write("AAAAAA", 12, 3);
//    write("BBBBBB", 10);
//    write("CCCCCC", 14, 7, 7);
//    write("DDDDDD", 13, 9, 9);
//}


//Exercise 3
//void write(string text = "", int color = 7, short x = 0, short y = 0) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, color);
//    SetConsoleCursorPosition(h, { x, y });
//    cout << text << "\n";
//}
//
//int main() {
//    // write();
//    // write("Alexander");
//    // write("Alexander", 14);
//    // write("Alexander", 14, 5);
//    write("Alexander", 14, 5, 5);
//}


//Exercise 4
//void write(string text = "", int color = 7, short x = -1, short y = -1) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, color);
//    if (x != -1 && y != -1)
//        SetConsoleCursorPosition(h, { x, y });
//    cout << text << "\n";
//}
//
//int main() {
//    // write("Alexander", 14, 5, 5);
//    write("Alexander", 14, 5);
//    write("second line", 14);
//}


//Exercise 5
// void write(string text, int color, short x, short y) {
// void write(string text, int color, short x, short y = -1) {
// void write(string text, int color, short x = -1, short y = -1) {
// void write(string text, int color = 7, short x = -1, short y = -1) {

//void write(string text = "", int color = 7, short x = -1, short y = -1) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, color);
//    if (x != -1 && y != -1)
//        SetConsoleCursorPosition(h, { x, y });
//    cout << text << "\n";
//}
//
//int main() {
//    // write("Alexander", 14, 5, 5);
//    write("Alexander", 14, 5);
//    write("second line", 14);
//    // write(y : 5, x : 13, text : "Alex"); // в С++ немає іменованих параметрів
//}


//Practice 1
//void write(string text = "", int color = 7, short x = -1, short y = -1);
//
//void Rectangle(int width = 5, int height = 5, int color = 8) {
//    string line(width, '#');
//    for (int i = 0; i < height; ++i) {
//        write(line, color);
//    }
//}
//
//int main() {
//    Rectangle(15, 10, 12);
//    cout << "\n\n";
//    Rectangle(15, 10);
//    cout << "\n\n";
//    Rectangle();       
//}
//
//void write(string text, int color, short x, short y) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, color);
//    if (x != -1 && y != -1)
//        SetConsoleCursorPosition(h, { x, y });
//    cout << text << "\n";
//}


