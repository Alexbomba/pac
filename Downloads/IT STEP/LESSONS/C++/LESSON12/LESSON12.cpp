#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

//Exercise 1

//int main()
//{
//    int x = 10;
//    cout << x << "\n"; // 10 - значення
//    cout << &x << "\n"; // 0000007BEF6FF934 - операція взяття (оримання) адреси 
//    cout << (long long)&x << "\n";
//    int y = 20;
//    cout << &y << "\n";
//    cout << &main << "\n";
//    int ar[30];
//    cout << &ar << "\n";
//    cout << &cout << "\n";
//}


//Exercise 2

//int main()
//{
//    unsigned int size;
//    cout << "Please, enter size of array ( > 0 B): ";
//    cin >> size;
//
//    // приклад створення динамічного масиву
//    // new int[50];
//
//    // оператор new виділяє пам'ять під масиви (або навіть поодинокі об'єкти) на етапі виконання програми (в рантаймі)
//    // просимо ОС видлити пам'ять під НОВИХ 5САЙЗ елементів типу ІНТ)
//    while (true)
//    {
//        new int[size]; // оператор повертає в результаті роботи адресу початку блоку пам'яті
//        cout << "OK!\n";
//        Sleep(100);
//    }
//
//
//
//
//}


//Exercise 3

//int main()
//{
//	unsigned int size;
//	cout << "Please, enter size of array ( > 0 B): ";
//	// cin >> size;
//	size = 50;
//
//	// new повертає адресу (початок блоку, де буде розміщено масив)
//	// в С++ нема ніякого іншого способу або типу даних, для того щоб цю адресу зберегти - ОКРІМ ПОКАЖЧИКА!
//	int* ar = new int[size];
//	cout << ar << "\n";
//
//	cout << "OK!\n";
//
//
//
//
//}


//Exercise 4

//int main()
//{
//	unsigned int size;
//	cout << "Please, enter size of array ( > 0 B): ";
//	cin >> size;
//	// size = 50;
//
//	// РОБОТА З ДИНАМІЧНОЮ ПАМ'ЯТТЮ БЕЗ ПОКАЖЧИКІВ НЕМОЖЛИВА!!!
//	int* ar = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		ar[i] = rand() % 100;
//		cout << ar[i] << ", ";
//	}
//	delete[] ar; // очищення пам'яті
//
//	cout << "OK!\n";
//
//
//
//
//}


//Exercise 5

//int main()
//{
//    unsigned int size;
//    cout << "Please, enter size of array (from 5 to 1000): ";
//    cin >> size;
//
//    if (size < 5)
//        size = 5;
//    else if (size > 1000)
//        size = 1000;
//
//    int* ar = new int[size];
//
//    for (int i = 0; i < size; i++)
//    {
//        ar[i] = i * 10;
//        cout << ar[i] << " ";
//    }
//
//    delete[] ar;
//
//    cout << "\nOK!\n";
//}


//Exercise 6

//int main()
//{
//	int x = 10;
//	cout << x << "\n";
//	cout << &x << "\n";
//	int* ptr = &x; // ptr == pointer
//	// x == int
//	// &x == int*
//	// ptr = 10; // покажчик зберігає АДРЕСИ, а не звичаінй значення!
//	int y = 20;
//	ptr = &y;
//}


//Exercise 7

//int main()
//{
//	int x = 10;
//	// x = 15; // зміна значення напряму
//	int* ptr = &x;
//	cout << &x << "\n";
//	cout << ptr << "\n"; // ptr == &x
//	cout << *ptr << "\n"; // опосередкована адресація (разименування)
//	// суть операції розименування
//	// 1) перейти за адресою, яка зберігається у покажчику
//	// 2) отримати повний доступ до комірки пам'яті, в якій зберігається змінна за адресою
//	// *ptr == x
//	*ptr = 15; // x = 15; // опосередкований доступ!!!
//	cout << x << "\n";
//	*ptr = 25;
//	cout << x << "\n"; // 25
//	x = 57;
//	cout << *ptr << "\n"; // 57
//
//}


//Exercise 8

//int main()
//{
//	// якщо змінна була створена в середині функції,
//	// і має змінити своє значення в середині ЦІЄЇ Ж функції, то
//	// ніякі покажчики тут не потрібні ))
//	int x = 10;
//	x = 20; // пряме звернення
//
//}


//Exercise 9

//int x = 10; //
//
//void test() {
//	x = 20; // side effect!!!
//}
//
//int main()
//{
//	cout << x << "\n"; // 10
//	test(); // x = 20;
//	cout << x << "\n"; // 20
//}


//Exercise 10

