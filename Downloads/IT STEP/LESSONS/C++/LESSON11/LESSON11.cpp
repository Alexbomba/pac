#include <iostream>
using namespace std;

//Exercise 1
//void test() {
//	cout << "test start\n";
//	int x = 10;
//	cout << x << "\n";
//	cout << "test finish\n";
//}
//
//int main() {
//	int m = 20;
//	cout << "main start\n";
//	test(); // синхронний виклик
//	cout << m << "\n"; // 20
//	cout << "main finish\n";
//}

//Exercise 2
//int main() {
//	cout << "main start\n";
//	main(); // приклад прямої рекурсії - функція викликає саму себе
//	cout << "main finish\n";
//}


//Exercise 3
//int main();
//
//void test() {
//	main();
//}
//
//int main() {
//	cout << "main start\n";
//	test(); // приклад непрямої (опосередкованої) рекурсії - функція викликає саму себе, але за допомоги додаткової функції
//	cout << "main finish\n";
//}


//Exercise 4
//int main();
//
//void test() {
//	main();
//}
//
//int main() {
//	cout << "main start\n";
//	test(); // приклад непрямої (опосередкованої) рекурсії - функція викликає саму себе, але за допомоги додаткової функції
//	cout << "main finish\n";
//}


//Exercise 5
//int main() {
//	int local = 0; // в кожної функції - свої власні локальні змінні! навіть якщо це декілька версій однієї і тієї самої функції!
//	cout << &local << "\n";
//	local++; // 1
//	cout << "main start\n";
//	cout << local << "\n"; // 1
//	main();
//	cout << "main finish\n";
//}


//Exercise 6
//int main() {
//	// при повторному вході у функцію (навіть якщо це рекурсивний виклик) змінна не буде перестворюватися!
//	static int local = 0; // змінна створюється лише при першому вході
//	cout << &local << "\n";
//	local++; // 1 2 3 4 5 ...
//	cout << "main start\n";
//	cout << local << "\n"; // 1
//	main();
//	cout << "main finish\n";
//}


//Exercise 7
//int main() {
//	static int local = 0;
//	local++;
//	cout << local << "\n"; // 1 2 3 4 5 ...
//	main();
//}


//Exercise 8
//int main() {
//	static int local = 0;
//	local++;
//	cout << local << "\n"; // 1 2 3 4 5 ...
//	main(); // при виклику функції, виділяється пам'ять для розміщення всіх інструкцій чергової версії, а також запам'ятовується адреса інструкції після повернення (умовно, це рядок номер 9)
//	cout << "end of program";
//}
// перша версія функції мейн викликає другу,
// друга - третю і тд,
// при цьому всі попередні версії продовжують існувати в пам'яті і чекають, поки відпрацює наступна версія!
// проблема: нема умови, яка б це все завершувала

// 2 золоті правила рекурсії:
// - придумати де зробити рекурсивний виклик (функція має викликати сама себе або напряму або опосередковано)
// - придумати умову яка не дозволить в черговий раз зробити рекурсивний виклик

// всі виклики, що сталися, зберігаються в окремій області пам'яті, яка називається СТЕК (stack)
//


//Exercise 9
//main() {
//	int x = 10; // кожна локальна змінна займає місце на стеку, і тому кількість рекурсивних викликів може стати менше
//	static int local = 0;
//	local++;
//	cout << local << "\n"; // 1 2 3 4 5 ...
//	main(); // при виклику функції, виділяється пам'ять для розміщення всіх інструкцій чергової версії, а також запам'ятовується адреса інструкції після повернення (умовно, це рядок номер 9)
//	cout << "end of program";
//}
// розмір області пам'яті СТЕК - 1МБ
// один виклик функції "вартує" 262 Б приблизно


//Exercise 10
//int main() {
//	// 3993 виклики
//	int x = 10; // 3500 кожна локальна змінна займає місце на стеку, і тому кількість рекурсивних викликів може стати менше
//	double d = 3.14; // 3200
//	int ar[100]; // 1315
//	static int local = 0;
//	local++;
//	cout << local << "\n"; // 1 2 3 4 5 ...
//	main(); // при виклику функції, виділяється пам'ять для розміщення всіх інструкцій чергової версії, а також запам'ятовується адреса інструкції після повернення (умовно, це рядок номер 9)
//	cout << "end of program";
//}
// розмір області пам'яті СТЕК - 1МБ
// один виклик функції "вартує" 262 Б приблизно


//Exercise 11
//int main() {
//	static int local = 0;
//	local++;
//	cout << local << "\n"; // 1 2 3
//	if (local < 3) { // умова рекурсивного виклику
//		main();
//		cout << "return from another version of main!\n";
//	}
//	else {
//		cout << "EXIT FROM RECURSION\n";
//		// exit(0);
//	}
//	cout << "end of program\n";
//}


//Exercise 12
//int main() {
//	static int local = 0;
//	local++;
//	cout << local << "\n"; // 1 2 3
//	if (local < 10) { // умова рекурсивного виклику
//		main();
//		// cout << "return from another version of main!\n";
//	}
//	else {
//		// cout << "EXIT FROM RECURSION\n";
//		// exit(0);
//	}
//	// cout << "end of program\n";
//}


//Practice 1
//int main() {
//	static int local = 0;
//	local++;
//	cout << 11 - local << "\n"; // 1 2 3
//	if (local < 10) { // умова рекурсивного виклику
//		main();
//		// cout << "return from another version of main!\n";
//	}
//	else {
//		// cout << "EXIT FROM RECURSION\n";
//		// exit(0);
//	}
//	// cout << "end of program\n";
//}


//Exercise 13
//void diapazone(int start, int end) {
//	cout << start << "\n"; // 1 2 3 4 5
//	if (start < end)
//		diapazone(start + 1, end); // diapazone(2, 5);
//}
//
//int main() {
//	diapazone(1, 5); // 1 2 3 4 5
//}

//Practice 2
//void diapazone(int start, int end) {
//    cout << start << "\n"; 
//    if (start > end)   
//        diapazone(start - 1, end); 
//}
//
//int main() {
//    diapazone(10, 1); 
//}


//Exercise 14
int main()
{

}