#include <iostream>
#include <algorithm>
#include <windows.h> // COORD HANDLE SetConsoleTextAttribute SetConsoleCursorPosition
#include <conio.h> // _getch
using namespace std;

//Exercise 1
//int main() {
//
//	srand(time(0));
//
//	rand();
//
//	const int SIZE = 42;
//
//	int numbers[42];
//
//	for (int i = 0; i < SIZE; i++)
//
//	{
//
//		numbers[i] = i + 1; // 1 2 3 4 .... 42 
//
//	}
//
//	random_shuffle(numbers, numbers + SIZE);
//
//	for (int i = 0; i < 6; i++)
//
//	{
//
//		cout << numbers[i] << ", ";
//
//	}
//
//}


//Exercise 2
//int main() {
//
//	const int HEIGHT = 5;
//
//	const int WIDTH = 10;
//
//	int numbers[HEIGHT][WIDTH] = {}; // 00000000000 50 шт
//
//	for (int y = 0; y < HEIGHT; y++)
//
//	{
//
//		for (int x = 0; x < WIDTH; x++)
//
//		{
//
//			cout << numbers[y][x] << " ";
//
//		}
//
//		cout << "\n\n";
//
//	}
//
//
//}


//Exercise 3
//enum GameObject : short { HALL, WALL, COIN, ENEMY };
//
//int main() {
//	srand(time(0));
//	rand();
//	system("title Bomberman");
//
//	const int HEIGHT = 15;
//	const int WIDTH = 45;
//	int map[HEIGHT][WIDTH] = {};
//
//	// 0 - hall
//	// 1 - wall
//	// 2 - coin
//	// 3 - enemy
//	// 4 - medkit
//	// 5 - energy
//	// ...
//
//	// MODEL (логіка заповнення масиву)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			map[y][x] = rand() % 4; // 0 1 2 3
//		}
//	}
//
//	///////////////////////////////////////////////////////////
//
//	// VIEW (подання - як буде виглядати ігрова локація)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			// cout << map[y][x];
//			switch (map[y][x]) {
//			case GameObject::HALL: // 0
//				// як показати коридор
//				cout << " ";
//				break;
//			case GameObject::WALL: // 1
//				cout << "#";
//				break;
//			case GameObject::COIN:
//				cout << ".";
//				break;
//			case GameObject::ENEMY:
//				cout << "@";
//				break;
//				// case GameObject::SMTH_ELSE:
//					// як показати щось інше
//				//	break;
//			}
//		}
//		cout << "\n";
//	}
//
//	Sleep(INFINITE);
//}


//Exercise 4 (1)
//enum GameObject : short { HALL, WALL, COIN, ENEMY };
//enum Color : short {
//	BLACK, DARKBLUE, DARKGREEN, TURQUOISE, DARKRED,
//	PURPLE, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN,
//	CYAN, RED, PINK, YELLOW, WHITE
//};
//
//
//int main() {
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	srand(time(0));
//	rand();
//	system("title Bomberman");
//
//	const int HEIGHT = 15;
//	const int WIDTH = 45;
//	int map[HEIGHT][WIDTH] = {};
//
//
//	// MODEL (логіка заповнення масиву)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			map[y][x] = rand() % 4; // 0 1 2 3
//		}
//	}
//
//	///////////////////////////////////////////////////////////
//
//	// VIEW (подання - як буде виглядати ігрова локація)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			switch (map[y][x]) {
//			case GameObject::HALL: // 0
//				// як показати коридор
//				SetConsoleTextAttribute(h, Color::BLACK);
//				cout << " ";
//				break;
//			case GameObject::WALL: // 1
//				SetConsoleTextAttribute(h, Color::DARKGREEN);
//				cout << "#";
//				break;
//			case GameObject::COIN:
//				SetConsoleTextAttribute(h, Color::YELLOW);
//				cout << ".";
//				break;
//			case GameObject::ENEMY:
//				SetConsoleTextAttribute(h, Color::RED);
//				cout << "@";
//				break;
//				// case GameObject::SMTH_ELSE:
//					// як показати щось інше
//				//	break;
//			}
//		}
//		cout << "\n";
//	}
//
//	Sleep(INFINITE);
//}


//Exercise 4 (2)
//enum GameObject : short { HALL, WALL, COIN, ENEMY };
//enum Color : short {
//	BLACK, DARKBLUE, DARKGREEN, TURQUOISE, DARKRED,
//	PURPLE, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN,
//	CYAN, RED, PINK, YELLOW, WHITE
//};
//
//
//int main() {
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	srand(time(0));
//	rand();
//	system("title Bomberman");
//
//	const int HEIGHT = 15;
//	const int WIDTH = 45;
//	int map[HEIGHT][WIDTH] = {};
//	// ASCII Table
//	//for (int i = 0; i < 256; i++)
//	//{
//	//	cout << (char)i << " - " << i << "\n";
//	//}
//
//	// MODEL (логіка заповнення масиву)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			map[y][x] = rand() % 4; // 0 1 2 3
//		}
//	}
//
//	///////////////////////////////////////////////////////////
//
//	// VIEW (подання - як буде виглядати ігрова локація)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			switch (map[y][x]) {
//			case GameObject::HALL: // 0
//				// як показати коридор
//				SetConsoleTextAttribute(h, Color::BLACK);
//				cout << " ";
//				break;
//			case GameObject::WALL: // 1
//				SetConsoleTextAttribute(h, Color::DARKGREEN);
//				// cout << "#";
//				cout << (char)178;
//				break;
//			case GameObject::COIN:
//				SetConsoleTextAttribute(h, Color::YELLOW);
//				cout << ".";
//				break;
//			case GameObject::ENEMY:
//				SetConsoleTextAttribute(h, Color::RED);
//				cout << "O";
//				break;
//				// case GameObject::SMTH_ELSE:
//					// як показати щось інше
//				//	break;
//			}
//		}
//		cout << "\n";
//	}
//
//	Sleep(INFINITE);
//}


//Exercise 4 (3)
//enum GameObject : short { HALL, WALL, COIN, ENEMY };
//enum Color : short {
//	BLACK, DARKBLUE, DARKGREEN, TURQUOISE, DARKRED,
//	PURPLE, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN,
//	CYAN, RED, PINK, YELLOW, WHITE
//};
//
//
//int main() {
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	srand(time(0));
//	rand();
//	system("title Bomberman");
//
//	const int HEIGHT = 25;
//	const int WIDTH = 65;
//	int map[HEIGHT][WIDTH] = {};
//	// ASCII Table
//	//for (int i = 0; i < 256; i++)
//	//{
//	//	cout << (char)i << " - " << i << "\n";
//	//}
//
//	// MODEL (логіка заповнення масиву)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			map[y][x] = rand() % 4; // 0 1 2 3
//
//			// рамка по краях
//			if (x == 0 || y == 0 || x == WIDTH - 1 || y == HEIGHT - 1)
//				map[y][x] = GameObject::WALL;
//
//			// отвори для входу і виходу
//			if (x == 0 && y == 2 ||
//				x == 1 && y == 2 ||
//				x == 2 && y == 2 ||
//
//				x == WIDTH - 1 && y == HEIGHT - 3 ||
//				x == WIDTH - 2 && y == HEIGHT - 3 ||
//				x == WIDTH - 3 && y == HEIGHT - 3)
//				map[y][x] = GameObject::HALL;
//
//			if (map[y][x] == GameObject::ENEMY) {
//				int r = rand() % 10; // 0 1 2 3 4 5 6 7 8 9
//				if (r != 0) {
//					map[y][x] = GameObject::HALL;
//				}
//			}
//		}
//	}
//
//	///////////////////////////////////////////////////////////
//
//	// VIEW (подання - як буде виглядати ігрова локація)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			switch (map[y][x]) {
//			case GameObject::HALL: // 0
//				// як показати коридор
//				SetConsoleTextAttribute(h, Color::BLACK);
//				cout << " ";
//				break;
//			case GameObject::WALL: // 1
//				SetConsoleTextAttribute(h, Color::DARKGREEN);
//				// cout << "#";
//				cout << (char)178;
//				break;
//			case GameObject::COIN:
//				SetConsoleTextAttribute(h, Color::YELLOW);
//				cout << ".";
//				break;
//			case GameObject::ENEMY:
//				SetConsoleTextAttribute(h, Color::RED);
//				cout << "O";
//				break;
//				// case GameObject::SMTH_ELSE:
//					// як показати щось інше
//				//	break;
//			}
//		}
//		cout << "\n";
//	}
//
//	Sleep(INFINITE);
//}


//Exercise 4 (4)
//enum GameObject : short { HALL, WALL, COIN, ENEMY };
//enum Color : short {
//	BLACK, DARKBLUE, DARKGREEN, TURQUOISE, DARKRED,
//	PURPLE, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN,
//	CYAN, RED, PINK, YELLOW, WHITE
//};
//enum Key : short {
//	LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80,
//	ENTER = 13, SPACE = 32, ESCAPE = 27, BACKSPACE = 8
//};
//
//int main() {
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	srand(time(0));
//	rand();
//	system("title Bomberman");
//
//	const int HEIGHT = 25;
//	const int WIDTH = 65;
//	int map[HEIGHT][WIDTH] = {};
//	// ASCII Table
//	//for (int i = 0; i < 256; i++)
//	//{
//	//	cout << (char)i << " - " << i << "\n";
//	//}
//
//	// MODEL (логіка заповнення масиву)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			map[y][x] = rand() % 4; // 0 1 2 3
//
//			// рамка по краях
//			if (x == 0 || y == 0 || x == WIDTH - 1 || y == HEIGHT - 1)
//				map[y][x] = GameObject::WALL;
//
//			// отвори для входу і виходу
//			if (x == 0 && y == 2 ||
//				x == 1 && y == 2 ||
//				x == 2 && y == 2 ||
//
//				x == WIDTH - 1 && y == HEIGHT - 3 ||
//				x == WIDTH - 2 && y == HEIGHT - 3 ||
//				x == WIDTH - 3 && y == HEIGHT - 3)
//				map[y][x] = GameObject::HALL;
//
//			if (map[y][x] == GameObject::ENEMY) {
//				int r = rand() % 10; // 0 1 2 3 4 5 6 7 8 9
//				if (r != 0) {
//					map[y][x] = GameObject::HALL;
//				}
//			}
//		}
//	}
//
//	///////////////////////////////////////////////////////////
//
//	// VIEW (подання - як буде виглядати ігрова локація)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			switch (map[y][x]) {
//			case GameObject::HALL: // 0
//				// як показати коридор
//				SetConsoleTextAttribute(h, Color::BLACK);
//				cout << " ";
//				break;
//			case GameObject::WALL: // 1
//				SetConsoleTextAttribute(h, Color::DARKGREEN);
//				// cout << "#";
//				cout << (char)178;
//				break;
//			case GameObject::COIN:
//				SetConsoleTextAttribute(h, Color::YELLOW);
//				cout << ".";
//				break;
//			case GameObject::ENEMY:
//				SetConsoleTextAttribute(h, Color::RED);
//				cout << "O";
//				break;
//				// case GameObject::SMTH_ELSE:
//					// як показати щось інше
//				//	break;
//			}
//
//		}
//		cout << "\n";
//	}
//
//	////////////////////////////////////////////////////////////
//	// показ ГГ
//	COORD hero;
//	hero.X = 0;
//	hero.Y = 2;
//	SetConsoleCursorPosition(h, hero);
//	SetConsoleTextAttribute(h, Color::BLUE);
//	cout << "O";
//
//	while (true) {
//		int code = _getch(); // get character
//		if (code == 224) {
//			code = _getch();
//		}
//		cout << code << "\n";
//		if (code == Key::LEFT) {
//			cout << "LEFT\n";
//		}
//	}
//
//
//	Sleep(INFINITE);
//}


//Exercise 4 (5)

//enum GameObject : short { HALL, WALL, COIN, ENEMY };
//enum Color : short {
//	BLACK, DARKBLUE, DARKGREEN, TURQUOISE, DARKRED,
//	PURPLE, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN,
//	CYAN, RED, PINK, YELLOW, WHITE
//};
//enum Key : short {
//	LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80,
//	ENTER = 13, SPACE = 32, ESCAPE = 27, BACKSPACE = 8
//};
//
//int main() {
//	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//	srand(time(0));
//	rand();
//	system("title Bomberman");
//
//	// cursor hide
//	CONSOLE_CURSOR_INFO cursor;
//	cursor.bVisible = false;
//	cursor.dwSize = 100; // 1-100
//	SetConsoleCursorInfo(h, &cursor);
//
//	const int HEIGHT = 25;
//	const int WIDTH = 65;
//	int map[HEIGHT][WIDTH] = {};
//	// ASCII Table
//	//for (int i = 0; i < 256; i++)
//	//{
//	//	cout << (char)i << " - " << i << "\n";
//	//}
//
//	// MODEL (логіка заповнення масиву)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			map[y][x] = rand() % 4; // 0 1 2 3
//
//			// рамка по краях
//			if (x == 0 || y == 0 || x == WIDTH - 1 || y == HEIGHT - 1)
//				map[y][x] = GameObject::WALL;
//
//			// отвори для входу і виходу
//			if (x == 0 && y == 2 ||
//				x == 1 && y == 2 ||
//				x == 2 && y == 2 ||
//
//				x == WIDTH - 1 && y == HEIGHT - 3 ||
//				x == WIDTH - 2 && y == HEIGHT - 3 ||
//				x == WIDTH - 3 && y == HEIGHT - 3)
//				map[y][x] = GameObject::HALL;
//
//			if (map[y][x] == GameObject::ENEMY) {
//				int r = rand() % 10; // 0 1 2 3 4 5 6 7 8 9
//				if (r != 0) {
//					map[y][x] = GameObject::HALL;
//				}
//			}
//		}
//	}
//
//	///////////////////////////////////////////////////////////
//
//	// VIEW (подання - як буде виглядати ігрова локація)
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		for (int x = 0; x < WIDTH; x++)
//		{
//			switch (map[y][x]) {
//			case GameObject::HALL: // 0
//				// як показати коридор
//				SetConsoleTextAttribute(h, Color::BLACK);
//				cout << " ";
//				break;
//			case GameObject::WALL: // 1
//				SetConsoleTextAttribute(h, Color::DARKGREEN);
//				// cout << "#";
//				cout << (char)178;
//				break;
//			case GameObject::COIN:
//				SetConsoleTextAttribute(h, Color::YELLOW);
//				cout << ".";
//				break;
//			case GameObject::ENEMY:
//				SetConsoleTextAttribute(h, Color::RED);
//				cout << "O";
//				break;
//				// case GameObject::SMTH_ELSE:
//					// як показати щось інше
//				//	break;
//			}
//
//		}
//		cout << "\n";
//	}
//
//	////////////////////////////////////////////////////////////
//	// показ ГГ
//	COORD hero;
//	hero.X = 0;
//	hero.Y = 2;
//	SetConsoleCursorPosition(h, hero);
//	SetConsoleTextAttribute(h, Color::BLUE);
//	cout << "O";
//
//	int coins_collected = 0;
//
//	COORD coins_info;
//	coins_info.X = WIDTH + 1;
//	coins_info.Y = 0;
//	SetConsoleCursorPosition(h, coins_info);
//	SetConsoleTextAttribute(h, Color::DARKYELLOW);
//	cout << "COINS: ";
//	SetConsoleTextAttribute(h, Color::YELLOW);
//	cout << coins_collected;
//
//	// ігровий двигунчик
//	while (true) {
//		int code = _getch(); // get character
//		if (code == 224) {
//			code = _getch();
//		}
//
//		COORD old_position = hero;
//		bool has_been_moved = false; // false - пересування не було
//
//		// cout << code << "\n";
//		switch (code) {
//		case Key::LEFT:
//			if (hero.X > 0 && map[hero.Y][hero.X - 1] != GameObject::WALL) {
//				has_been_moved = true;
//				hero.X--;
//			}
//			break;
//		case Key::RIGHT:
//			if (map[hero.Y][hero.X + 1] != GameObject::WALL) {
//				has_been_moved = true;
//				hero.X++;
//			}
//			break;
//		case Key::UP:
//			if (map[hero.Y - 1][hero.X] != GameObject::WALL) {
//				has_been_moved = true;
//				hero.Y--;
//			}
//			break;
//		case Key::DOWN:
//			if (map[hero.Y + 1][hero.X] != GameObject::WALL) {
//				has_been_moved = true;
//				hero.Y++;
//			}
//			break;
//		}
//
//		if (has_been_moved) {
//			// стирання ГГ в "старих" координатах
//			SetConsoleCursorPosition(h, old_position);
//			SetConsoleTextAttribute(h, Color::BLACK);
//			cout << " ";
//			// перемальовка ГГ в нових координатах
//			SetConsoleCursorPosition(h, hero);
//			SetConsoleTextAttribute(h, Color::BLUE);
//			cout << "O";
//		}
//
//		// приклад перевірки на перетинання з якимось об'єктом в лабірінті
//		if (map[hero.Y][hero.X] == GameObject::COIN) {
//			// cout << "COIN";
//			coins_collected++;
//			map[hero.Y][hero.X] = GameObject::HALL;
//			COORD coins_info;
//			coins_info.X = WIDTH + 1;
//			coins_info.Y = 0;
//			SetConsoleCursorPosition(h, coins_info);
//			SetConsoleTextAttribute(h, Color::DARKYELLOW);
//			cout << "COINS: ";
//			SetConsoleTextAttribute(h, Color::YELLOW);
//			cout << coins_collected;
//		}
//
//		if (map[hero.Y][hero.X] == GameObject::ENEMY) {
//			cout << "ENEMY";
//		}
//
//	}
//
//
//	Sleep(INFINITE);
//}


enum GameObject : short { HALL, WALL, COIN, ENEMY, MEDKIT };
enum Color : short {
    BLACK, DARKBLUE, DARKGREEN, TURQUOISE, DARKRED,
    PURPLE, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN,
    CYAN, RED, PINK, YELLOW, WHITE
};
enum Key : short {
    LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80,
    ENTER = 13, SPACE = 32, ESCAPE = 27, BACKSPACE = 8
};

const int HEIGHT = 25;
const int WIDTH = 65;

void DrawInfo(HANDLE h, int coins, int total, int hp) {
    COORD pos;
    pos.X = WIDTH + 2;
    pos.Y = 0;
    SetConsoleCursorPosition(h, pos);
    SetConsoleTextAttribute(h, DARKYELLOW);
    cout << "COINS: ";
    SetConsoleTextAttribute(h, YELLOW);
    cout << coins << "/" << total;

    pos.Y = 1;
    SetConsoleCursorPosition(h, pos);
    SetConsoleTextAttribute(h, RED);
    cout << "HP: ";
    SetConsoleTextAttribute(h, WHITE);
    cout << hp << "   ";
}

void ShowEndMessage(const char* msg, Color color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    COORD endPos = { 0, HEIGHT + 2 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), endPos);
    cout << msg << "\n";
}

int main() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    srand(GetTickCount());

    CONSOLE_CURSOR_INFO cursor;
    cursor.bVisible = false;
    cursor.dwSize = 100;
    SetConsoleCursorInfo(h, &cursor);

    int map[HEIGHT][WIDTH] = {};
    int total_coins = 0;

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            map[y][x] = rand() % 5;

            if (x == 0 || y == 0 || x == WIDTH - 1 || y == HEIGHT - 1)
                map[y][x] = WALL;

            if ((x == 0 && y == 2) || (x == 1 && y == 2) || (x == 2 && y == 2) ||
                (x == WIDTH - 1 && y == HEIGHT - 3) ||
                (x == WIDTH - 2 && y == HEIGHT - 3) ||
                (x == WIDTH - 3 && y == HEIGHT - 3))
                map[y][x] = HALL;

            if (map[y][x] == ENEMY && rand() % 10 != 0)
                map[y][x] = HALL;

            if (map[y][x] == COIN) total_coins++;

            if (map[y][x] == MEDKIT && rand() % 4 != 0)
                map[y][x] = HALL;
        }
    }

    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            switch (map[y][x]) {
            case HALL:     SetConsoleTextAttribute(h, BLACK); cout << " "; break;
            case WALL:     SetConsoleTextAttribute(h, DARKGREEN); cout << (char)178; break;
            case COIN:     SetConsoleTextAttribute(h, YELLOW); cout << "."; break;
            case ENEMY:    SetConsoleTextAttribute(h, RED); cout << "O"; break;
            case MEDKIT:   SetConsoleTextAttribute(h, CYAN); cout << "+"; break;
            }
        }
        cout << "\n";
    }

    COORD hero = { 0, 2 };
    SetConsoleCursorPosition(h, hero);
    SetConsoleTextAttribute(h, BLUE);
    cout << "O";

    int coins = 0;
    int hp = 100;

    DrawInfo(h, coins, total_coins, hp);

    while (true) {
        int code = _getch();
        if (code == 224) code = _getch();

        COORD old_pos = hero;
        bool moved = false;

        switch (code) {
        case LEFT:
            if (hero.X > 0 && map[hero.Y][hero.X - 1] != WALL) {
                hero.X--; moved = true;
            } break;
        case RIGHT:
            if (map[hero.Y][hero.X + 1] != WALL) {
                hero.X++; moved = true;
            } break;
        case UP:
            if (map[hero.Y - 1][hero.X] != WALL) {
                hero.Y--; moved = true;
            } break;
        case DOWN:
            if (map[hero.Y + 1][hero.X] != WALL) {
                hero.Y++; moved = true;
            } break;
        }

        if (moved) {
            SetConsoleCursorPosition(h, old_pos);
            SetConsoleTextAttribute(h, BLACK);
            cout << " ";
            SetConsoleCursorPosition(h, hero);
            SetConsoleTextAttribute(h, BLUE);
            cout << "O";
        }

        int& cell = map[hero.Y][hero.X];

        if (cell == COIN) {
            coins++;
            cell = HALL;
            DrawInfo(h, coins, total_coins, hp);
        }
        else if (cell == ENEMY) {
            hp -= 25;
            cell = HALL;
            DrawInfo(h, coins, total_coins, hp);
            if (hp <= 0) {
                ShowEndMessage("Поразка: здоров'я закінчилося!", RED);
                break;
            }
        }
        else if (cell == MEDKIT) {
            if (hp < 100) {
                hp = min(hp + 25, 100);
                cell = HALL;
                DrawInfo(h, coins, total_coins, hp);
            }
        }

        if (coins == total_coins) {
            ShowEndMessage("Перемога: монети зібрано!", GREEN);
            break;
        }

        if (hero.X >= WIDTH - 3 && hero.Y == HEIGHT - 3) {
            ShowEndMessage("Перемога: знайдено вихід!", GREEN);
            break;
        }
    }

    Sleep(INFINITE);
    return 0;
}