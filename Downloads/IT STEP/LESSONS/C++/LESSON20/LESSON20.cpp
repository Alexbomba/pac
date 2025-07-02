#include <iostream>
using namespace std;

//class Person {
//public:
//	string name;
//	int age;
//	int happiness = 50; // 0...100
//
//	// methods
//};
//
//class Cat {
//public:
//	// СТАН (РЕАЛІЗАЦІЯ, состояние) - характеристики
//	string nick;
//	int paws = 4;
//	int energy = 100; // 0...100
//
//	// ПОВЕДІНКА (ІНТЕРФЕЙС)
//	void Play(Person& person) {
//		if (paws == 0) {
//			cout << nick << " cannot play with " << person.name << "\n";
//			return;
//		}
//		cout << nick << " plays with " << person.name << "\n";
//		person.happiness++; // в результаті взаємодії стани одного чи обох об'єктів можуть змінюватися		energy--;
//		energy -= 10;
//	}
//};
//
//class Contact {
//public:
//	// МНОЖИНА ЗНАЧЕНЬ
//	// поля (характеристики, атрібути) - РЕАЛІЗАЦІЯ (ЩО ВОНО ТАКЕ)
//	string name; // будь який рядок від "" до будь якої довжини
//	string lastname;
//	string* phone_numbers; // покажчик - тримає в собі адресу
//	string picture;
//	int age;
//
//	// МНОЖИНА ОПЕРАЦІЙ
//	// методи (функції класу) - ІНТЕРФЕЙС (ЩО ВОНО ВМІЄ РОБИТИ? ЯК ЦЯ СУТНІСТЬ ВМІЄ ВЗАЄМОДІЯТИ З ІНШИМИ СУТНОСТЯМИ)
//	void Dial(const Contact& contact) {
//		// cout << contact.
//	}
//
//	void Create() {
//		cout << "contact was created\n";
//	}
//
//	void Show() {
//		cout << "contact SHOW\n";
//	}
//
//	void Edit() {
//		cout << "contact EDIT\n";
//	}
//
//	void Delete() {
//		cout << "contact DELETE\n";
//	}
//};


class Person {
private: // клас закрив доступ до полів, і всього що знаходиться нижче
	// приклад правил
	string name; // !@#$%^&*()_ недопустимо
	int age; // 0-150
	int happiness = 50; // 0-100
public:
	// приклад сеттеру (встановлювача)
	// це функція, яка дозволить записати значення в поле, згідно певних правил
	void SetAge(int new_age) {
		if (new_age < 0 || new_age > 150) {
			cout << "Incorrect value for age. Please, enter value from 0 to 150.\n"; // просто повідомляємо користувача про помилку
			// throw "ERROR\n"; // більш "злий" варіант, який завалить роботу програми (генеруємо виключення, або помилку на етапі виконання)
			// age = 18; // запис значення по дефолту
		}
		else {
			age = new_age;
		}
	}

	// приклад метода-геттера
	// тип такий же, як у поля
	// назва бажано щоб починалася з гет
	// параметрів не буде
	// тіло методу - це лише один рядок з ретьорном
	int GetAge() {
		return age;
	}

	void SetHappiness(int new_happiness) {
		if (new_happiness < 0 || new_happiness > 100) {
			cout << "Incorrect value for happiness. Please, enter value from 0 to 100.\n";
		}
		else {
			happiness = new_happiness;
		}
	}

	// Геттер для щастя
	int GetHappiness() {
		return happiness;
	}
};

int main() {
	Person p;
	// p.age = 235; // за рахунок того, що поле закрите, до нього напряму доступу більше нема :(
	p.SetAge(16);
	// cout << p.age << "\n";
	cout << "Age: " << p.GetAge() << "\n";

	p.SetHappiness(30); 
	cout << "Happiness: " << p.GetHappiness() << "\n";

	p.SetHappiness(666); 
	cout << "Happiness: " << p.GetHappiness() << "\n"; 

	p.SetHappiness(-10); 
	cout << "Happiness: " << p.GetHappiness() << "\n"; 

}