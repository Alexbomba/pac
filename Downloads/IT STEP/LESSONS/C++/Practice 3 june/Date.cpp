#include "Date.h"

	void Date::ShowDate() {
		cout << day << ".";
		cout << month << ".";
		cout << year << "\n";
	}
 
	void Date::SetDate() {
		cout << "Please, enter day of month (1-31): ";
		cin >> day;
		if (day < 1 || day > 31) {
			//cout << "OOPS! Incorrect day value!\n"; // просто повідомлення про те, що в людини руки-крюкі
			//date.day = 1; // або нормалізуємо значення
			throw "ERROR!\n"; // або робимо останнє зауваження і програма вилітає
		}
 
		cout << "Please, enter number of month (1-12): ";
		cin >> month;
 
		if (month < 1 || month > 12) {
			throw "ERROR!\n";
		}
 
		cout << "Please, enter year: ";
		cin >> year;
	}
 
	int Date::DistanceInDays(const Date& begin, const Date& finish) {
		// ...
		return 0;
	}
 
	Date Date::DateAdd(const Date& date, int day) {
		// ...
		Date result;
		return result;
	}