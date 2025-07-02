#include <iostream>
#include <stack>
using namespace std;

//class Stack {
//	static const unsigned int SIZE = 10; // кількість елементів у стеці (за бажанням можна змінити)
//
//	int data[SIZE] = {}; // приклад реалізації стека на статичному масиві
//	unsigned int index = 0; // індекс, за яким буде додаватися черговий новий елемент
//	// також індекс можна сприймати як кількість елементів, які були додані в стек на даний момент
//
//public:
//	void Clear() {
//		index = 0;
//	}
//
//	bool IsEmpty() const {
//		return index == 0;
//	}
//
//	bool IsFull() const {
//		return index == SIZE;
//	}
//
//	unsigned int GetCount() const {
//		return index;
//	}
//
//	void Push(int value) {
//		if (!IsFull())
//			data[index++] = value;
//		else
//			throw "Переповнення стека!";
//	}
//
//	void Pop() {
//		if (!IsEmpty())
//			index--;
//		else throw "Стек порожній!";
//	}
//
//	int Peek() {
//		if (!IsEmpty())
//			return data[index - 1];
//		else throw "Стек порожній!";
//	}
//};
//
//int main() {
//	Stack st; // створюємо "порожній" стек
//	st.Push(10); // додаємо елемент в стек 10
//	st.Push(20);
//	st.Push(30);
//	st.Push(40);
//
//	st.Push(50);
//	st.Push(60);
//	st.Push(70);
//	st.Push(80);
//
//	st.Push(90);
//	st.Push(100);
//
//	st.Push(110);
//
//	cout << "OK!\n";
//}


//class Stack {
//	static const unsigned int SIZE = 10; // кількість елементів у стеці (за бажанням можна змінити)
//
//	int data[SIZE] = {}; // приклад реалізації стека на статичному масиві
//	unsigned int index = 0; // індекс, за яким буде додаватися черговий новий елемент
//	// також індекс можна сприймати як кількість елементів, які були додані в стек на даний момент
//
//public:
//	void Clear() {
//		index = 0;
//	}
//
//	bool IsEmpty() const {
//		return index == 0;
//	}
//
//	// !!!
//	bool IsFull() const {
//		return index == SIZE;
//	}
//
//	// !!!
//	unsigned int GetCount() const {
//		return index;
//	}
//
//	void Push(int value) {
//		if (!IsFull()) // якщо в стеке ЩЕ Є МІСЦЕ
//			data[index++] = value;
//		else
//			throw "Переповнення стека!";
//	}
//
//	void Pop() {
//		if (!IsEmpty())
//			index--;
//		else throw "Стек порожній!";
//	}
//
//	int Peek() {
//		if (!IsEmpty())
//			return data[index - 1];
//		else throw "Стек порожній!";
//	}
//};
//
//int main() {
//	Stack st; // створюємо "порожній" стек
//	cout << st.GetCount() << "\n"; // 0
//
//	st.Push(10); // додаємо елемент в стек 10
//	st.Push(20);
//	cout << st.GetCount() << "\n"; // 2
//
//	st.Push(30);
//	st.Push(40);
//	cout << st.GetCount() << "\n"; // 4
//
//}


int main() {
    stack<int> st;

    // Додаємо 5 елементів
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    
}
