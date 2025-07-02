#include <iostream>
using namespace std;

//class Cat {
//public: // без цього характеристики та функції будуть недоступні
//
//	// 1) характеристики (атрибути, поля, змінні типу)
//	string color;
//	int lapki = 4;
//	string nickname;
//	string klichka;
//	double weight;
//	double tail_length;
//	string poroda;
//	string type;
//	int energy = 100;
//	int health = 100;
//
//	// 2) інтерфейс (взаємодія) ЩО ВОНА ВМІЄ РОБИТИ???
//
//	void Play() {
//		cout << nickname << " is playing...\n";
//		energy--;
//		cout << "Energy: " << energy << "\n";
//	}
//
//	void Sleep() {
//		cout << nickname << " is sleeping...\n";
//		energy = 100;
//		cout << "Energy: " << energy << "\n";
//	}
//
//	void MakeSound() {
//		cout << nickname << ": MEOOOOWW!...\n";
//	}
//};
//
//
//int main() {
//	Cat barsik;
//	barsik.energy = 95;
//	barsik.nickname = "Barsik";
//	barsik.lapki = 4;
//	barsik.poroda = "Norwegian Forest";
//	barsik.tail_length = 1;
//	barsik.weight = 5;
//	// Play(barsik);
//	barsik.Play();
//	barsik.MakeSound();
//	barsik.Play();
//	barsik.Sleep();
//	barsik.Play();
//}


class Laptop {
public:
	string color;
	string logo;
	int proccesor = 1; // AMD
	int video_card = 2; // nvidia

	void Info() {
		cout << "Laptop Info:\n";
	
	}

	void Logo() {
		cout << "Logo: " << logo << "\n";
	}

	void Color() {
		cout << "Color: " << color << "\n";
	}

	void Proccesor() {
		cout << "Processor: " << proccesor << "\n";
	}

	void VideoCard() {
		cout << "Video Card: " << video_card << "\n";
	}
};

    int main() {  
        Laptop Apple;  

        Apple.logo = "Apple"; 
        Apple.color = "Black";  
        Apple.proccesor = 1;  
        Apple.video_card = 2;  

		Apple.Info();
        Apple.Logo();
		Apple.Color();
		Apple.Proccesor();
		Apple.VideoCard();
    }