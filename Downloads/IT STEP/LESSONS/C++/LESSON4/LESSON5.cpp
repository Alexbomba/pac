
#include <iostream>
#include <windows.h>
using namespace std;

//int main()
//{
//    int start = 0;
//    int end = 10;
//    int current = start; // 0
//
//	while (current <= end)
//	{
//		cout << current << "\n"; // 0
//		current++; // 1
//	}
//	cout << "\n";
//	return 0;
//}


//Практика
//int main() {
//    int current = 1000;
//
//    while (current >= 0) {
//        if (current > 0) {
//            cout << current << ", ";
//        }
//        else {
//            cout << current << "."; 
//        }
//        current -= 50; 
//    }
//    cout << "\n";
//
//    return 0;
//}


//int main() {
//    bool is_hungry = true; // чи голодний кіт?
//    while (is_hungry)
//    {
//        SetConsoleOutputCP(1251);
//        cout << "Яку їжу ви дасте коту? ";
//        string meal;
//        cin >> meal;
//        cout << "Котик їсть ";
//        SetConsoleOutputCP(866);
//        cout << meal;
//        cout << "...\n";
//        if (meal == "whiskas")
//            is_hungry = false;
//    }
//    SetConsoleOutputCP(1251);
//    cout << "Ура! Кіт не голодний!\n";
//}

//int main() {
//    int current = 1000;
//
//    while (current >= 0) {
//        if (current > 0) {
//            cout << current << ", ";
//        }
//        else {
//            cout << current << ".";
//        }
//        current -= 50;
//    }
//    cout << "\n";
//
//    return 0;
//}


//int main() {
//    setlocale(0, "");
//    int choice;
//    do { // заходимо в цикл БЕЗ ПЕРЕВІРКИ УМОВИ !!!!
//        cout << "Введiть перше число: ";
//        int a;
//        cin >> a;
//        cout << "Введiть друге число: ";
//        int b;
//        cin >> b;
//        cout << "Введiть 1 для отримання суми\n2 - для рiзницi\n3 - для виходу: ";
//        cin >> choice;
//        switch (choice) {
//        case 1: // якщо користувач вибрав додавання
//            cout << "Результат: " << a + b << "\n";
//            break; // зупинка switch
//        case 2: // якщо користувач вибрав віднімання
//            cout << "Результат: " << a - b << "\n";
//            break;
//        case 3: // якщо користувач вибрав вихід
//            cout << "На все добре!\n";
//            break;
//        default: // якщо обрана дія некоректна
//            cout << "Помилка введення... Спробуйте ще раз!\n";
//            break;
//        }
//    } while (choice != 3); // цикл працює, поки користувач не вкаже число 3
//
//}


//int main() {
//	setlocale(0, "");
//	int choice = -1;
//	int a;
//	int b;
//
//	while (choice != 3) {
//		cout << "Введiть перше число: ";
//		cin >> a;
//		cout << "Введiть друге число: ";
//		cin >> b;
//		cout << "Введiть 1 для отримання суми\n2 - для рiзницi\n3 - для виходу: ";
//		cin >> choice;
//		switch (choice) {
//		case 1: // якщо користувач вибрав додавання
//			cout << "Результат: " << a + b << "\n";
//			break; // зупинка switch
//		case 2: // якщо користувач вибрав віднімання
//			cout << "Результат: " << a - b << "\n";
//			break;
//		case 3: // якщо користувач вибрав вихід
//			cout << "На все добре!\n";
//			exit(0); // ВИХІД ІЗ ПРОГРАМИ
//			break;
//		default: // якщо обрана дія некоректна
//			cout << "Помилка введення... Спробуйте ще раз!\n";
//			break;
//		}
//	}
//
//
//}


