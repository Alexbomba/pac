#include <iostream>
#include <string>
using namespace std;

//int main() {
//	int width = 5;
//	int height = 4;
//
//	int* ptr_array[4];
//
//	for (int y = 0; y < height; y++) {
//		ptr_array[y] = new int[width];
//		for (int x = 0; x < width; x++) {
//			ptr_array[y][x] = rand() % 4;
//			cout << ptr_array[y][x] << " ";
//		}
//		cout << "\n";
//	}
//
//
//
//}


//int main() {
//	int width = 5;
//	int height = 4;
//
	 //new тип[кількість елементів];
//	// int* ptr = new int[5];
//	// double* ptr = new double[7];
//	// string* ptr = new string[width];
//	// int** ptr = new int*[width];
//
//	int** ptr_array = new int* [height];
//	// int* ptr_array[4];
//
//	for (int y = 0; y < height; y++) {
//		ptr_array[y] = new int[width];
//		for (int x = 0; x < width; x++) {
//			ptr_array[y][x] = rand() % 4;
//			cout << ptr_array[y][x] << " ";
//		}
//		cout << "\n";
//	}
//
//
//
//}


//void random_fill_2d_array(int** ar, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            ar[i][j] = rand() % 90 + 10;
//        }
//    }
//}
//
//void show_2d_array(int** ar, int rows, int cols) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            cout << ar[i][j] << " ";
//        }
//        cout << "\n";
//    }
//}
//
//void free_memory_2d_array(int** ar, int rows) {
//    for (int i = 0; i < rows; ++i) {
//        delete[] ar[i]; // видаляємо кожен рядок
//    }
//    delete[] ar; // видаляємо масив з вказівниками
//}
//
//
//int main() {
//    int rows = 15;       // кількість рядків
//    int cols = 35;      // кількість стовпців
//
//    // створення двовимірного масиву
//    int** array = new int* [rows];  // виділяємо пам'ять для масиву з рядків
//    for (int i = 0; i < rows; ++i)
//        array[i] = new int[cols]; // виділяємо пам'ять для кожного рядка
//
//    // заповнення масиву значеннями
//    random_fill_2d_array(array, rows, cols);
//    show_2d_array(array, rows, cols);
//    free_memory_2d_array(array, rows);
//}


//int main() {
//    string name = "Побег из Шоушенка";
//    string original_title = "The Shawshank Redemption";
//    double imdb_rating = 9.3;
//    int year = 1994;
//    int age_restriction = 16;
//    string poster = "https://m.media-amazon.com/images/M/MV5BMDAyY2FhYjctNDc5OS00MDNlLThiMGUtY2UxYWVkNGY2ZjljXkEyXkFqcGc@._V1_FMjpg_UX1000_.jpg";
//    string trailer = "";
//    string additional_video_URLs[6];
//    string additional_photo_URLS[99];
//    string genres[2] = { "Epic", "Drama" };
//    string description = "A banker convicted of uxoricide forms a friendship over a quarter century with a hardened convict, while maintaining his innocence and trying to remain hopeful through simple compassion.";
//}


struct Room {
    int area;              
    int windowCount;       
    bool hasBalcony;     
    string floorType;      
    string wallColor; 
};

int main() {
    Room myRoom;

    myRoom.area = 20;
    myRoom.windowCount = 2;
    myRoom.hasBalcony = true;
    myRoom.floorType = "laminate";
    myRoom.wallColor = "white";

    cout << "Area: " << myRoom.area << " m" << "\n";
    cout << "Number of windows: " << myRoom.windowCount << "\n";
    cout << "Has balcony: " << (myRoom.hasBalcony ? "yes" : "no") << "\n";
    cout << "Floor type: " << myRoom.floorType << "\n";
    cout << "Wall color: " << myRoom.wallColor << "\n";

}
