#include <iostream>
#include <algorithm>
using namespace std;

//struct Person {
//    string name;
//    int age;
//    double height;
//};


//int main()
//{
//    // синтаксис створення статичного масиву
//    // тип_елементів ідентифікатор[кількість_елементів];
//    // кількість_елементів для статичних масивів має бути задана літералом або константою!
//    // кількість - ціле число від 1 до 
//    const int SIZE = 4;
//    // cin >> size;
//    string cities[SIZE];
//}


//int main()
//{
//    const int SIZE = 4;
//    string cities[]{ "Odesa", "Amsterdam", "Paris", "Prague" };
//    //cout << cities[0] << "\n";
//    //cout << cities[1] << "\n";
//    //cout << cities[2] << "\n";
//    //cout << cities[3] << "\n";
//    cout << cities << "\n"; // нажаль, в С++ неможливо швидко показати масив, доведеться використовувати перебірний цикл!
//    for (int i = 0; i < SIZE; i++)
//    {
//        cout << cities[i] << "\n";
//    }
//
//
//
//}


//int main()
//{
//    const int SIZE = 10;
//    string cities[SIZE];
//
//    for (int i = 0; i < SIZE; i++)
//    {
//        cout << "Please, enter your favorite city name # " << i + 1 << ": ";
//        cin >> cities[i];
//        // cout << cities[i] << "\n";
//    }
//
//    for (int i = 0; i < SIZE; i++)
//    {
//        cout << cities[i] << "\n";
//    }
//
//
//
//}


//int main()
//{
//    // елементи масиву - або ВСІ змінні, або ВСІ константи
//    const double numbers[10] = { 10, 12.5, 5.3 };
//    cout << numbers[0] << "\n";
//    // numbers[0] = 11;
//
//}


//int main()
//{
//    const double numbers[5] = { 10, 12.5, 5.3, 4 };
//    cout << numbers[-2] << "\n";
//    cout << numbers[-1] << "\n";
//    cout << numbers[0] << "\n";
//    cout << numbers[1] << "\n";
//    cout << numbers[2] << "\n";
//    cout << numbers[3] << "\n";
//    cout << numbers[4] << "\n";
//    cout << numbers[5] << "\n";
//    cout << numbers[60000] << "\n";
//
//
//}


//int main()
//{
//	double numbers[5] = { 10, 12.5, 5.3, 4 };
//	cout << sizeof(numbers) << "\n";
//	cout << sizeof(double) << "\n";
//	cout << sizeof(numbers) / sizeof(double) << "\n";
//	// cout << numbers.size()
//	// масив у С++ це дуже проста річ - просто ділянка пам'яті, і нажаль ніяких методів типу сортування, мінімум, нема
//}


//int main()
//{
//	const int SIZE = 5;
//	double numbers[SIZE]{ 10, 12.5, 5.3, 4 };
//	// foreach
//	int index = 0;
//	for (auto& element : numbers) {
//		cout << element;
//		if (index == 4) cout << ".\n";
//		else cout << ", ";
//		element = 10; // 10 пишеться У оригінал елементу масиву
//		index++;
//	}
//
//	cout << "\n\n";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << numbers[i] << ", ";
//	}
//
//	
//}


//int main()
//{
//	const int size = 10;
//	int nums[size]{ 1,2,3,4,5,6,7,8,9,10};
//
//	cout << "Reverse:\n";
//	for (int i = size - 1; i >= 0; i--) {
//		cout << nums[i] << ", ";
//	}
//}


//int main()
//{
//	const int SIZE = 100;
//	int numbers[SIZE]; // без ініціалізації, всі елементи масиву будуть дорівнювати "сміттю", показувати їх не бажано!
//	for (auto& element : numbers) {
//		cout << element;
//		cout << ", ";
//	}
//
//}


//int main()
//
//{
//
//	const int SIZE = 100;
//
//	int numbers[SIZE]{}; // 0 0 0 0 0 0 0 0 
//
//	for (auto& element : numbers) {
//
//		cout << element;
//
//		cout << ", ";
//
//	}
//
//}


//int main()
//
//{
//
//	const int SIZE = 100;
//
//	int numbers[SIZE]{};
//
//	generate(numbers, numbers + SIZE, rand);
//
//	cout << numbers << "\n";
//
//	cout << &numbers[0] << "\n";
//
//	cout << numbers + SIZE << "\n";
//
//	cout << &numbers[SIZE] << "\n";
//
//	cout << rand << "\n";
//
//	for (auto& element : numbers) {
//
//		cout << element;
//
//		cout << ", ";
//
//	}
//
//}


//int myrand() {
//	int min = 0;
//	int max = 100;
//	int K = max - min + 1; // 101
//	return rand() % K + min; // 0...100
//}
//
//int main()
//{
//	const int SIZE = 100;
//	int numbers[SIZE]{};
//
//	generate(numbers, numbers + SIZE, myrand);
//	for (auto& element : numbers) {
//		cout << element;
//		cout << ", ";
//	}
//
//}


