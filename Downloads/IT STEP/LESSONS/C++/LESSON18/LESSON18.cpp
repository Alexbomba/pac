#include <iostream>
#include <windows.h>
#include <string> // to_string
using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	FILE* file;
	int error_code = fopen_s(&file, "C:/Users/arg50/Desktop/test.txt", "r");
	if (error_code == 0 && file != nullptr) {
		// fgets == file get string
		char* line = new char[200];
		// feof == find end of file
		while (true) { // я не знаю скільки буде рядків
			fgets(line, 199, file); // спроба прочитати рядок
			if (feof(file) == 0) { // якщо рядок вдало зчитався, і у файлі є щось іще (є іще рядок), то
				cout << line; // показуємо поточний рядок
			}
			else break; // якщо фєоф повернув не 0, це означає що файл скінчився, і рядків більше нема
		}
		fclose(file);
	}
	else {
		cout << "Error code: " << error_code << "\n";
	}

}