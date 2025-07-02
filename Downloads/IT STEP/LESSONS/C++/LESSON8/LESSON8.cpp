//#include <iostream>
//#include <windows.h>
//using namespace std;

//Exercise 1
//// function definition (проголошення, створення, реалізація функції)
//void say_hello() {
//    cout << "Hello!\n";
//    cout << "This is a C++ function.\n";
//    cout << "END OF FUNCTION. GOOD BYE!\n";
//}
//
//int main() // мейн в С++ - це єдина функція, яка викликається самостійно
//{
//    say_hello(); // function call (виклик функції)
//    say_hello();
//    cout << "some commands....\n";
//    say_hello();
//    for (int i = 0; i < 10; i++)
//    {
//        say_hello();
//    }
//}


//Exercise 2
// 1 параметр

// 2 параметра + return

// курсор

// прототипы

// function definition (проголошення, створення, реалізація функції)

//void say_hello() {
//
//    cout << "Hello!\n";
//
//    cout << "This is a C++ function.\n";
//
//    cout << "END OF FUNCTION. GOOD BYE!\n";
//
//}
//
//// приклад функції з 1 параметром 
//
//void say_hello_to_someone(string name) { // name - параметр
//
//    cout << "Hello, " << name << "!\n";
//
//    cout << "How are you?\n";
//
//}
//
//int main()
//
//{
//
//    say_hello_to_someone("Alex"); // "Alex" - аргумент (те, що передається у функцію)
//
//    say_hello_to_someone("Mykyta");
//
//    say_hello_to_someone("Arseniy");
//
//    say_hello_to_someone("Denys");
//
//}


//Exercise 3
// 1 параметр
// 2 параметра + return
// курсор
// прототипы

// function definition (проголошення, створення, реалізація функції)
//void say_hello() {
//    cout << "Hello!\n";
//    cout << "This is a C++ function.\n";
//    cout << "END OF FUNCTION. GOOD BYE!\n";
//}
//
//// приклад функції з 1 параметром 
//void say_hello_to_someone(string name) { // name - параметр
//    cout << "Hello, " << name << "!\n";
//    cout << "How are you?\n";
//}
//
//void draw_rectangle(unsigned short width, unsigned short height) {
//    for (unsigned short y = 0; y < height; y++)
//    {
//        for (unsigned short x = 0; x < width; x++)
//        {
//            cout << "#";
//        }
//        cout << "\n";
//    }
//    cout << "\n\n";
//}
//
//int main()
//{
//    draw_rectangle(5, 5);
//    draw_rectangle(3, 3);
//    draw_rectangle(7, 7);
//    draw_rectangle(15, 12);
//}


//Exercise 4
// 1 параметр
// 2 параметра + return
// курсор
// прототипы

// function definition (проголошення, створення, реалізація функції)
//void say_hello() {
//    cout << "Hello!\n";
//    cout << "This is a C++ function.\n";
//    cout << "END OF FUNCTION. GOOD BYE!\n";
//}
//
//// приклад функції з 1 параметром 
//void say_hello_to_someone(string name) { // name - параметр
//    cout << "Hello, " << name << "!\n";
//    cout << "How are you?\n";
//}
//
//// створення псевдоніму для типу
//typedef unsigned short ushort;
//
//void draw_rectangle(ushort width, ushort height, char symbol) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    for (ushort y = 0; y < height; y++)
//    {
//        for (ushort x = 0; x < width; x++)
//        {
//            cout << symbol;
//        }
//        cout << "\n";
//    }
//    cout << "\n\n";
//}
//
//int main()
//{
//    draw_rectangle(5, 5, '@');
//    draw_rectangle(3, 3, '%');
//}


//Exercise 5
//enum Color : short {
//    BLACK, DARKBLUE, DARKGREEN, TURQUOISE, DARKRED,
//    PURPLE, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN,
//    CYAN, RED, PINK, YELLOW, WHITE
//};
//
//// 1 параметр
//// 2 параметра + return
//// курсор
//// прототипы
//
//// function definition (проголошення, створення, реалізація функції)
//void say_hello() {
//    cout << "Hello!\n";
//    cout << "This is a C++ function.\n";
//    cout << "END OF FUNCTION. GOOD BYE!\n";
//}
//
//// приклад функції з 1 параметром 
//void say_hello_to_someone(string name) { // name - параметр
//    cout << "Hello, " << name << "!\n";
//    cout << "How are you?\n";
//}
//
//// створення псевдоніму для типу
//typedef unsigned short ushort;
//
//void draw_rectangle(ushort width, ushort height, char symbol, Color color) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleTextAttribute(h, color);
//    for (ushort y = 0; y < height; y++)
//    {
//        for (ushort x = 0; x < width; x++)
//        {
//            cout << symbol;
//        }
//        cout << "\n";
//    }
//    cout << "\n\n";
//}
//
//int main()
//{
//    draw_rectangle(5, 5, '@', Color::RED);
//    draw_rectangle(3, 3, '%', Color::BLUE);
//    draw_rectangle(7, 7, '^', Color::GREEN);
//}


//Exercise 6
//void print_text(int x, int y, int color, const string& text) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//    COORD coord = { x, y };
//    SetConsoleCursorPosition(h, coord);
//
//    SetConsoleTextAttribute(h, color);
//
//    cout << text;
//}
//
//int main() {
//    print_text(5, 5, 14, "LEMON");  
//    print_text(10, 10, 12, "CHERRY"); 
//    print_text(15, 15, 2, "KIWI"); 
//}


//Exercise 7
// тип_результату назва (параметри через кому)
//int suma(int first, int second) {
//	return first + second;
//}
//// якщо функція не використовує сіАут, то вона стає універсальної
//// для перенесення на інші платформи та типи додатків
//// таку функцію можна використовувати повторно НЕ ЛИШЕ в термінальних додатках,
//// а й в десктопних рішеннях (вікна на робочому столі), веб-сайтах, мобильних пристроях і тд
//
//// клієнтська частина (клієнт тут - це ми, програмісти)
//// 
//int main() {
//	suma(10, 15); // бажано результати роботи функцій або одразу показувати якось, або запам'ятовувати у окрему змінну
//	cout << suma(20, 30) << "\n"; // ок
//	int result = suma(50, 70); // ок
//	cout << ".........................\n";
//	cout << result << "\n";
//}


//Exercise 8
// процедура - це функція, яка НІЧОГО не повертає (позначена як void)
//


#include <iostream>
#include <windows.h>
using namespace std;

#pragma comment(lib, "winmm.lib")

DWORD WINAPI MusicThread(void* param)
{
	PlaySoundA("C:\\Users\\arg50\\Downloads\\IT STEP\\LESSONS\\C++\\PACMAN\\Pac-Man-intro-music", NULL, SND_NODEFAULT | SND_LOOP);
	return 0;
}

void Action()
{
	while (true)
	{
		Sleep(100);
	}
}

int main()
{
	system("title PlaySound Demo");
	CreateThread(0, 0, MusicThread, 0, 0, 0);
	Action();
}