#include <iostream>
using namespace std;

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
        if (new_age < 0  new_age > 150) {
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
        if (new_happiness < 0  new_happiness > 100) {
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