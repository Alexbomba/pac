#include "Header.h"

int main() {
    const int height = 19;
    const int width = 36;

    const char* layout[] = {
        "###################################",
        "#................#................#",
        "#.#####.########.#.########.#####.#",
        "#.................................#",
        "#.#####.#.###############.#.#####.#",
        "#.......#........#........#.......#",
        "#######.########.#.########.#######",
        "      #.#........ ........#.#      ",
        "#######.#.###### E ######.#.#######",
        "       ...#      E      #...       ",
        "#######.#.###############.#.#######",
        "      #.#.................#.#      ",
        "#######.########.#.########.#######",
        "#.......#........#........#.......#",
        "#.#####.#.###############.#.#####.#",
        "#.................................#",
        "#.#####.########.#.########.#####.#",
        "#................#................#",
        "###################################"
    };

    Game* game = new Game;
    game->width = width;
    game->height = height;
    game->map = new int* [height];
    for (int i = 0; i < height; i++) {
        game->map[i] = new int[width];
    }

    game->heroPos = { 17, 11 };
    game->coinsCollected = 0;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    CreateThread(0, 0, MusicThread, 0, 0, 0);
    system("title PAC-MAN Console");
    HideCursor(&h);
    GenerateMap(game, layout);
    DrawMap(&h, game);
    DrawHero(&h, &game->heroPos);
    ShowCoinCount(&h, &game->coinsCollected, &game->width);

    int dir = -1;

    while (true) {
        Sleep(200);

        if (_kbhit()) {
            int key = _getch();
            if (key == 224 && _kbhit()) {
                int new_dir = _getch();
                bool canMove = false;
                switch (new_dir) {
                case LEFT: canMove = (game->heroPos.x > 0 && game->map[game->heroPos.y][game->heroPos.x - 1] != WALL); break;
                case RIGHT: canMove = (game->heroPos.x < game->width - 1 && game->map[game->heroPos.y][game->heroPos.x + 1] != WALL); break;
                case UP: canMove = (game->heroPos.y > 0 && game->map[game->heroPos.y - 1][game->heroPos.x] != WALL); break;
                case DOWN: canMove = (game->heroPos.y < game->height - 1 && game->map[game->heroPos.y + 1][game->heroPos.x] != WALL); break;
                }
                if (canMove) dir = new_dir;
            }
            else if (key == ESCAPE) break;
        }

        Position oldPos = game->heroPos;
        bool moved = false;
        switch (dir) {
        case LEFT: if (game->heroPos.x == 0) game->heroPos.x = game->width - 1, moved = true;
                 else if (game->map[game->heroPos.y][game->heroPos.x - 1] != WALL) game->heroPos.x--, moved = true;
            break;
        case RIGHT: if (game->heroPos.x == game->width - 1) game->heroPos.x = 0, moved = true;
                  else if (game->map[game->heroPos.y][game->heroPos.x + 1] != WALL) game->heroPos.x++, moved = true;
            break;
        case UP: if (game->heroPos.y > 0 && game->map[game->heroPos.y - 1][game->heroPos.x] != WALL) game->heroPos.y--, moved = true;
            break;
        case DOWN: if (game->heroPos.y < game->height - 1 && game->map[game->heroPos.y + 1][game->heroPos.x] != WALL) game->heroPos.y++, moved = true;
            break;
        }

        if (moved) {
            COORD oldCoord = { (SHORT)oldPos.x, (SHORT)oldPos.y };
            SetConsoleCursorPosition(h, oldCoord);
            SetConsoleTextAttribute(h, BLACK);
            cout << " ";
            DrawHero(&h, &game->heroPos);
        }

        if (game->map[game->heroPos.y][game->heroPos.x] == COIN) {
            game->coinsCollected++;
            game->map[game->heroPos.y][game->heroPos.x] = HALL;
            ShowCoinCount(&h, &game->coinsCollected, &game->width);
            if (game->coinsCollected == game->totalCoins) {
                COORD winPos = { 0, (SHORT)(game->height + 2) };
                SetConsoleCursorPosition(h, winPos);
                SetConsoleTextAttribute(h, GREEN);
                cout << "CONGRATULATIONS! YOU WON! ALL COINS COLLECTED!\n";
                break;
            }
        }

        MoveEnemies(game, &h);
    }

    for (int i = 0; i < game->height; i++) delete[] game->map[i];
    delete[] game->map;
    delete game;

    SetConsoleTextAttribute(h, WHITE);
    Sleep(INFINITE);
}
