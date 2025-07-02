#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Person {
    int age; // 4
    string name; // 40 !!!
    int energy; // 4
    int health; // 4
    double money; // 8

public:
    Person(string name, int age, int health, int energy, double money) {
        cout << "C-TOR!\n";
        setName(name);
        setAge(age);
        setHealth(health);
        setEnergy(energy);
        setMoney(money);
    }

    int getAge() const {
        return age;
    }
    string getName() const {
        return name;
    }
    int getEnergy() const {
        return energy;
    }
    int getHealth() const {
        return health;
    }
    double getMoney() const {
        return money;
    }

    void setAge(int age) {
        if (age < 0 || age > 150) throw "ERROR!\n";
        this->age = age;
    }
    void setName(const string& name) {
        this->name = name;
    }
    void setEnergy(int energy) {
        this->energy = energy;
    }
    void setHealth(int health) {
        this->health = health;
    }
    void setMoney(double money) {
        this->money = money;
    }

    void sleep() {
        energy += 10;
        if (energy > 100) energy = 100;
        cout << name << " спить.\n";
    }

    void work() {
        if (energy >= 10 && health >= 10) {
            energy -= 10;
            health -= 10;
            money += 100;
            cout << name << " працює.\n";
        }
        else {
            cout << name << " притомився щоб працювати.\n";
        }
    }

    void makeBirthday() {
        age += 1;
        cout << "З днем народження, " << name << "! Тепер тобі " << age << " років.\n";
    }

    void printState() const {
        cout << "Ім'я: " << name << "\n";
        cout << "Вік: " << age << "\n";
        cout << "Енергія: " << energy << "\n";
        cout << "Здоровлячко: " << health << "\n";
        cout << "Гроші: " << money << "\n";
    }
};

int main() {
    SetConsoleOutputCP(1251);
    cout << sizeof(Person) << "\n"; // 64 !!!
}