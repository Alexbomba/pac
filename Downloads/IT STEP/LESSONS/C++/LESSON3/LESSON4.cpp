#include <iostream>
#include <windows.h>


using namespace std;

//int main()
//
//{
//
//    // and &&
//
//    // or  ||
//
//    // not !
//
//    string DBlogin = "Alex";
//
//    string DBpassword = "1234";
//
//    string login, password;
//
//    cout << "Please, enter login: ";
//
//    cin >> login;
//
//    cout << "Please, enter password: ";
//
//    cin >> password;
//
//    // TRUE - login OK password OK
//
//    // FALSE - smth wrong
//
//    cout << boolalpha;
//
//    cout << (login == DBlogin && password == DBpassword) << "\n";
//
//
//}
 
 
//int main()
//
//{
//
//    bool is_sunny = true;
//
//    bool is_summer_or_spring = true;
//
//    int air_temperature = 5;
//
//    double water_temperature = 5.1;
//
//    bool is_snowing = false;
//
//    bool water_has_sharks = false;
//
//    bool water_has_jellyfishes = true;
//
//    cout << boolalpha;
//
//    cout << (is_sunny && is_summer_or_spring &&
//
//        air_temperature > 20 && water_temperature > 15 &&
//
//        !is_snowing && !water_has_sharks && !water_has_jellyfishes) << "\n";
//
//
//}


//int main()
//{
//	int bus_number;
//	cout << "What bus number do you see?";
//	cin >> bus_number;
//
//	cout << boolalpha;
//	cout << (bus_number == 150 || bus_number == 146 || bus_number == 148) << "\n";
//
//}


//int main()
//{
//	 if (умовний_вираз) оператор
//
//	 if (умова) {
//	       дія (тіло оператору іф)
//	 }
//}


//int main()
//{
//	int pin;
//	cout << "Please, enter PIN-code: ";
//	cin >> pin;
//
//	if (pin == 1111) {
//		cout << "Welcome! Here is your money!\n";
//	}
//	 якщо ввести з клавіатури 1111, то умова буде істиною, і тому тіло іфа відпрацює
//	 якщо умова хибна, то в фігурні дужки іф не запускає
//}


//int main()
//
//{
//
//	int pin;
//
//	cout << "Please, enter PIN-code: ";
//
//	cin >> pin;
//
//	if (pin == 1111) {
//
//		cout << "Welcome! Here is your money!\n";
//
//	}
//
//	else {
//
//		cout << "OOPS! PIN-code is incorrect!\n";
//
//		main();
//
//	}
//
//}


//int main()
//{
//	// синтаксис тернарного оператора
//	// умова ? дія_якщо_так : дія_якщо_ні;
// 
//	int pin;
//	cout << "Please, enter PIN-code: ";
//	cin >> pin;
// 
//	if (pin == 1111)
//	{
//		cout << "Welcome! Here is your money!\n";
//	}
//	else
//	{
//		cout << "OOPS! PIN-code is incorrect!\n";
//		main(); // рекурсивний виклик функції (по суті, це зациклення роботи програми)
//	}
//}

//Тернарний оператор 
//int main()
//
//{
//
//	int pin;
//
//	cout << "Please, enter PIN-code: ";
//
//	cin >> pin;
//
//	// умова ? дія_якщо_так : дія_якщо_ні;
//
//	pin == 1111
//
//		?
//
//		cout << "Welcome! Here is your money!\n"
//
//		:
//
//		cout << "OOPS! PIN-code is incorrect!\n";
//
//}
//


//int main()
//{
//	int x = 100;
//	int y = 1500;
//	int max = x > y ? x : y;
//	cout << max << "\n";
//
//}


//int main()
//{
//	int a = 100;
//	int b = 2000;
//	int c = 30000;
//	int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
//	cout << max << "\n";
//
//}
 
 
//Практика

//int main()
//{
//	cout << "Enter words: ";
//	int num;
//	cin >> num;
//	(num % 3 == 0 && num % 5 == 0 && num % 7 == 0) ?
//		cout << "Multiple 3, 5 і 7" << "\n" :
//		cout << "Not a multiple 3, 5 і 7 " << "\n";
//}


//int main()
//
//{
//
//	int phone_number;
//
//	cout << "Please, dial the number: ";
//
//	cin >> phone_number;
//
//	// 101 102 103 104 838 
//
//	if (phone_number == 101) {
//
//		system("color 0C");
//
//		cout << "Fire department\n";
//
//	}
//
//	else if (phone_number == 102) {
//
//		system("color 09");
//
//		cout << "Police department\n";
//
//	}
//
//	else if (phone_number == 103) {
//
//		system("color FC");
//
//		cout << "Hospital\n";
//
//	}
//
//	else if (phone_number == 104) {
//
//		system("color EC");
//
//		cout << "Gazova sluzhba\n";
//
//	}
//
//	else if (phone_number == 838) {
//
//		system("color E0");
//
//		cout << "TAXI\n";
//
//	}
//
//	else {
//
//		cout << "ERROR NUMBER!\n";
//
//	}
//
//}


//#include <iostream>
//#include <string>
//#include <windows.h>
//using namespace std;
//
//int main() {
//    SetConsoleOutputCP(1251);
//
//    string choice;
//    cout << "Вітаємо в текстовому квесті! Ти стоїш перед великими воротами замку.\n";
//    cout << "Що ти робитимеш?\n";
//    cout << "1. Пройти через ворота\n";
//    cout << "2. Обійти замок\n";
//    cout << "3. Піти назад\n";
//    cout << "Вибери (1/2/3): ";
//    cin >> choice;
//
//    if (choice == "1") {
//        cout << "Ти входиш у замок і опиняєшся в величезній залі.\n";
//        cout << "Вибери що робити далі:\n";
//        cout << "1. Піти направо\n";
//        cout << "2. Піти наліво\n";
//        cout << "3. Вийти з замку\n";
//        cout << "Вибери (1/2/3): ";
//        cin >> choice;
//
//        if (choice == "1") {
//            cout << "Ти потрапляєш в кімнату з драконами!\n";
//            cout << "І ти помираєш...\n";
//        }
//        else if (choice == "2") {
//            cout << "Ти натрапляєш на скриню з багатством!\n";
//            cout << "Ти став багатим! Ура!\n";
//        }
//        else {
//            cout << "Ти виходиш з замку і продовжуєш свій шлях.\n";
//        }
//
//    }
//    else if (choice == "2") {
//        cout << "Ти обходиш замок і знаходиш стародавні руїни.\n";
//        cout << "Там прихований секрет!\n";
//        cout << "Ти стаєш археологом і розкопуєш великі скарби!\n";
//    }
//    else if (choice == "3") {
//        cout << "Ти вирішуєш повернутись назад і покидати місце пригод.\n";
//    }
//    else {
//        cout << "Ти вибрав невірну опцію! Прощай, герою!\n";
//    }
//
//    return 0;
//}


int main() 
{
	SetConsoleOutputCP(1251);
	cout << "Оберіть тварину: \n";
    cout << "1. Дельфін\n";
	cout << "2. Вівця\n";
	cout << "3. Лев\n";
	cout << "4. Півень\n";
	cout << "5. Комар\n";

	int animal;
	cin >> animal;

	if (animal == 1) {
		cout << "Дельфін каже: кью-кью\n";
	}
	else if (animal == 2) {
		cout << "Вівця каже: Бееееееееееееееееееееее\n";
	}
	else if (animal == 3) {
		cout << "Лев каже: ААААААААААААААААААА\n";
	}
	else if (animal == 4) {
		cout << "Півень каже: кукаріку\n";
	}
	else if (animal == 5) {
		cout << "Комар каже: ДЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗЗ\n";
	}
	else {
		cout << "Такої тварини не існує\n";
	}
	retern : 0;
}